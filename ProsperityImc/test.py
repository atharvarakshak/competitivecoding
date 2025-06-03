import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from imblearn.over_sampling import SMOTE
from imblearn.under_sampling import RandomUnderSampler
from imblearn.combine import SMOTEENN
from sklearn.model_selection import train_test_split

# 1. Load the dataset
df = pd.read_csv("dataset.csv")  # Update with actual file path

# 2. Display first few rows
print(df.head())

# 3. Visualize class distribution
plt.figure(figsize=(6, 4))
sns.countplot(data=df, x="labels", palette="coolwarm")
plt.title("Class Distribution Before Balancing")
plt.xlabel("Label (0: Non-Hate, 1: Hate)")
plt.ylabel("Count")
plt.show()

# 4. Remove duplicates
df = df.drop_duplicates()

# 5. Define features (X) and labels (y)
X = df["Content"]  # Text data
y = df["labels"]    # Labels (0 or 1)

# 6. Split into training & testing sets (optional)
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42, stratify=y)

# Convert X_train to a DataFrame for balancing
train_df = pd.DataFrame({"Content": X_train, "labels": y_train})

# 7. Handle class imbalance using SMOTE + Undersampling
oversample = SMOTE(sampling_strategy=0.5, random_state=42)  # Upsample minority class
undersample = RandomUnderSampler(sampling_strategy=0.7, random_state=42)  # Downsample majority class
smote_enn = SMOTEENN(random_state=42)  # Hybrid sampling

X_resampled, y_resampled = smote_enn.fit_resample(train_df[["Content"]], train_df["labels"])

# 8. Convert back to DataFrame
balanced_df = pd.DataFrame({"Content": X_resampled["Content"], "labels": y_resampled})

# 9. Visualize new class distribution
plt.figure(figsize=(6, 4))
sns.countplot(data=balanced_df, x="labels", palette="coolwarm")
plt.title("Class Distribution After Balancing")
plt.xlabel("Label (0: Non-Hate, 1: Hate)")
plt.ylabel("Count")
plt.show()

# 10. Save balanced dataset
balanced_df.to_csv("balanced_dataset.csv", index=False)
print("Balanced dataset saved as 'balanced_dataset.csv'.")