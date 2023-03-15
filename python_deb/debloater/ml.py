import pandas as pd

# Load the dataset
df = pd.read_csv('dataset.txt', delimiter='\t', header=None, names=['label', 'text'])

# Extract the label and the text
X = df['text']
y = df['label']

from sklearn.feature_extraction.text import CountVectorizer

# Create a CountVectorizer
vectorizer = CountVectorizer(binary=True)

# Fit the vectorizer on the text data
X = vectorizer.fit_transform(X)


from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression

# Split the dataset into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2)

# Train a Logistic Regression model
clf = LogisticRegression()
clf.fit(X_train, y_train)

from sklearn.metrics import accuracy_score

# Predict the labels of the testing set
y_pred = clf.predict(X_test)

# Compute the accuracy of the model
accuracy = accuracy_score(y_test, y_pred)
print('Accuracy:', accuracy)


# import pickle

# # assume your trained model is stored in the variable 'model'
# # save the model to a file using pickle
# with open('model.pkl', 'wb') as f:
#     pickle.dump(clf, f)

# # to load the model from file later
# with open('model.pkl', 'rb') as f:
#     my_model = pickle.load(f)


# new_data = [['union __anonunion_v_25\n'], ['struct huft\n']]

# # load the trained model
# with open('model.pkl', 'rb') as f:
#     model = pickle.load(f)

# # transform the new_data into a format suitable for prediction
# X_new = [[len(s[0])] for s in new_data]

# # make predictions on the new data
# y_new = model.predict(X_new)

# # print the predicted labels
# print(y_new)