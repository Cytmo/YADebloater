import pandas as pd
from sklearn.ensemble import RandomForestClassifier
from sklearn.model_selection import train_test_split
import re
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.preprocessing import LabelEncoder

# Load the labeled dataset
data = pd.read_csv('dataset.txt', delimiter='\t', header=None, names=['label', 'code_subaggregate'])

# Preprocess the code sub-aggregates
X = data['code_subaggregate']

# Split the dataset into training and testing sets
y = data['label']
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Train a Random Forest model on the training set
clf = RandomForestClassifier(n_estimators=100, max_depth=10, random_state=42)
clf.fit(X_train, y_train)

# Evaluate the model on the testing set
accuracy = clf.score(X_test, y_test)
print(f"Model accuracy: {accuracy}")

# Apply the model to new code sub-aggregates
new_subaggregates = ['code_subaggregate1', 'code_subaggregate2', ...] # List of new code sub-aggregates
new_subaggregates_processed = preprocess(new_subaggregates)
pass_probabilities = clf.predict_proba(new_subaggregates_processed)[:, 1]
for i, probability in enumerate(pass_probabilities):
    print(f"{new_subaggregates[i]}: {probability}")