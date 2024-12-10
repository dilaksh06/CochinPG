import pandas as pd
import numpy as np

# Creating the DataFrame with the given data
data = {
    'Name': ['Alice', 'Bob', 'Carol', 'David', 'Eve'],
    'Age': [28, 34, 29, 45, 23],
    'Department': ['HR', 'IT', 'IT', 'Marketing', 'HR'],
    'Salary': [50000, 70000, 65000, 55000, 48000]
}



df=pd.DataFrame(data)
print(df["Department"])
print (df)
df["wife"]=["no","no","no","no","yes"]
print(df)

print(pd.DataFrame(data,columns=["Name"]))

print(df.groupby("Department")["Salary"].mean())

print(df[df["Salary"]>50000])
df["Bonus"]=df["Salary"]*0.1
print(df)

print(f"the data frame is sorted by age by descending order\n {df.sort_values(by="Age",ascending=False)}")
