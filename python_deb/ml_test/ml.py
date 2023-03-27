import numpy as np

# Define the simplified code representation
code_lines = 20
actions = list(range(code_lines)) + [-1]  # Actions are the indices of lines to remove, and -1 to do nothing
print("Actions:", actions)
# Define the Q-table
q_table = np.zeros((code_lines + 1, len(actions)))

# Hyperparameters
alpha = 0.1  # Learning rate
gamma = 0.99  # Discount factor
epsilon = 0.1  # Exploration rate
episodes = 1000  # Number of training episodes

# Define the reward function
def reward_function(state, action):
    # Implement a reward function based on the result of the test suite after removing the line
    # For this example, we'll use a simple reward function that penalizes removing even-numbered lines
    if action == -1:
        return 0
    elif action % 3 == 0:
        return -1
    else:
        return 1

# Q-learning algorithm
for episode in range(episodes):
    state = 0
    done = False

    while not done:
        if np.random.uniform(0, 1) < epsilon:
            action = np.random.choice(actions)
        else:
            action = np.argmax(q_table[state])

        next_state = state + 1 if state < code_lines - 1 else 0
        reward = reward_function(state, action)

        q_table[state, action] += alpha * (reward + gamma * np.max(q_table[next_state]) - q_table[state, action])

        state = next_state
        done = state == 0

# Print the learned policy
policy = np.argmax(q_table, axis=1)
print("Learned policy:", policy)




def ddmin_function_level(code, test_func, function_list, num):
    total_removed = 0
    # Initialize the starting granularity to 1 (line by line)
    # Initialize the candidate to the original code
    candidate = copy.deepcopy(code)
    # keep track of each function's smaller set for multiprocessing
    smallest_set = {}
    # add a test_cache to reduce the unnecessary exec of same reduced functions
    test_cache={}
    for func in function_list:
        smallest_set.update({func['name']: None})
    # Flag to indicate if the code was reduced in the current iteration
    for func in tqdm(function_list, position=1,desc="Reducing functions...",):
        reduced = False
        cnt = 0
        granularity = 1
        max_length = func["end_line"] + 1 - func["start_line"] - 2
        code_length = len(code)

        while True:
            candidate = copy.deepcopy(code)
            desc = "Reducing {} (gran {} iter {})...".format(func['name'], granularity,cnt)
            with tqdm(total=max_length, desc=desc, position=2,leave=False) as pbar:
                logger.debug(
                    "removing function {} ...granularity is {}".format(
                        func["name"], granularity
                    )
                )
                cnt += 1
                for i in range(func["start_line"] + 1, func["end_line"]):
                    pbar.update(1)
                    # Remove the code at the current index
                    logger.debug(
                        "Removing code from line {} to line {} in function {} ".format(
                            i, i + granularity - 1, func["name"]
                        )
                    )
                    
                    skip_indicator = ""
                    # make sure i+granularity is not out of range
                    if i + granularity > func["end_line"]:
                        skip_indicator = ""
                        for k in range(i - 1, min(max_length, func["end_line"])):
                            try:
                                skip_indicator += candidate[k]
                                candidate[k] = "\n"
                            except IndexError:
                                os._exit()
                            # logger.error('Skipped')
                    else:
                        skip_indicator = ""
                        for k in range(i - 1, i + granularity - 1):
                            try:
                                skip_indicator += candidate[k]
                                candidate[k] = "\n"
                            except IndexError:
                                os._exit()
                            # logger.info('Skipped')
                    # Call the test function with the reduced code
                    logger.debug(
                        "Removing code from line {} to line {} in function {} ".format(
                            i, i + granularity - 1, func["name"]
                        )
                    )

                    if (
                        not check_brackets_balance(skip_indicator) or skip_indicator.strip()
                            .replace("}", "")
                            .replace("{", "")
                            .replace(";", "")
                            == "" 
                    ):
                        logger.debug("Skipped")
                        continue
                    # get the reduced version of the function to check if it is syntaxly correct or not
                    # to save the time to compile whole file


                    candidate_func_code = ''.join(candidate[func["start_line"]-2:func["end_line"]])

                    candidate_func_code_no_blank_lines = ''.join(line for line in candidate_func_code.splitlines(True) if line.strip())
                    cache_key = candidate_func_code_no_blank_lines
                    if cache_key in test_cache:
                        result = test_cache[cache_key]
                        logger.debug('Already have result in cache, skip the test')
                    else:
                        # get the reduced version of the function to check if it is syntaxly correct or not
                        # to save the time to compile whole file
                        # logger.debug(candidate_func_code)
                        if True:
                            # logger.debug('Syntax correct, run the test')
                            result = test_func(candidate, num)
                        else:
                            logger.debug('Syntax error, skip the test')

                            result = False
                        test_cache[cache_key] = result
                    if result:
                        # If the test passes, update the original code and reduce granularity
                        code = copy.deepcopy(candidate)
                        total_removed += 1
                        reduced = True
                        # Update the smallest set of lines for the function
                        new_smallest_func = []
                        for i in range(func["start_line"] + 1, func["end_line"]):
                            if code[i] != "\n":
                                new_smallest_func.append(candidate[i])
                        smallest_set[func['name']] = new_smallest_func


                    else:
                        logger.debug(
                            "Test failed, restoring code at line {}, content is {}".format(
                                i, code[i - 1 : i + granularity - 1]
                            )
                        )
                        # If the test fails, restore the removed code and move to the next index
                        candidate = copy.deepcopy(code)
                    # If no code was reduced in the current iteration, increase the granularity
                if reduced:

                    if granularity <= 8:
                    # if granularity < max_length:
                        granularity = min(max_length, granularity * 2)
                        logger.debug("increase granularity to {}".format(granularity))
                        reduced = False
                    else:
                        break
                elif granularity == 1 and not reduced:
                    break
                else:
                    granularity = 1
                    logger.debug(
                        "No code is reduced during last iteration, granularity is now {}".format(
                            granularity
                        )
                    )
        # Clear the cache for the current function before moving to the next one
        test_cache.clear()
    # Return the reduced code
    logger.info("Total removed {} lines".format(total_removed))
    return [code, function_list]