import pandas as pd
import numpy as np
import random
print("\n\n ------------------------product df")

# Step 1: Create the DataFrame
df = pd.DataFrame({
    "Date": ["2024-11-01", "2024-11-02", "2025-11-25"],
    "Product": ["Laptop", "Phone", "Tablet"],
    "Sales": [50, 400, 40]
})
print("Original DataFrame:")
print(df)

# Step 2: Display only the rows where Sales > 300
df_sales_gt_300 = df[df['Sales'] > 300]
print("\nRows where Sales > 300:")
print(df_sales_gt_300)

# Step 3: Add a new column 'Discount' (10% of Sales)
df["Discount"] = df["Sales"] * 0.1
print("\nDataFrame with Discount column:")
print(df)

# Step 4: Sort the DataFrame by Sales in descending order
df_sorted = df.sort_values(by="Sales", ascending=False)
print("\nDataFrame sorted by Sales in descending order:")
print(df_sorted)

# Step 5: Grouping and Aggregation
# Group by Product and calculate total sales
grouped_total_sales = df.groupby("Product")["Sales"].sum()
print("\nTotal Sales for each product:")

print(grouped_total_sales)

# Find the product with the highest average sales
grouped_avg_sales = df.groupby("Product")["Sales"].mean()
print(grouped_avg_sales )
max_avg_product = grouped_avg_sales.idxmax()
print("\nProduct with the highest average sales:")
print(f"\n{max_avg_product}: {grouped_avg_sales[max_avg_product]}")

print("\n\n------------------------end product df")


print("\n\n-------------------------city df")

# Step 1: Create a DataFrame
data = {
    "Name": ["Alice", "Bob", "Charlie", "David", "Eve"],
    "Age": [10, 30, 22, 35, 28],
    "City": ["New York", "Los Angeles", "Chicago", "Houston", "Phoenix"]
}

df = pd.DataFrame(data)

print(df)

df["score"]=np.random.randint(50,100,size=len(df))

print("\n")
print(df)

print("\nDisplay only the rows where Age is greater than 25\n")

print(df[df["Age"]>25])

print("\nFilter the rows where Score is greater than 75\n")

print(df[df["score"]>75])

print("\n only first 3 rows")
print(df[0:3])

print("\n ony first 2:4\n")
print(df[2:4])

print("\nUse .loc[] to display the row for a specific Name\n")

print(df.loc[df["Name"]=="Alice"])
print("\n")
print(df.loc[0])
print("\n")

print(df.loc[(df["Age"]>25) & (df["score"]>70),["Age","Name"]])
print("\n\n---------------------------end city df")

print(format("-","-^50"), "Salary Management System", format("-","-^50"))

data={"Name":['Jhon','Mary','Stove','Alice','David'],"Age":[28,35,40,25,30],"Salary":[60000,75000,50000,65000,450000],"Department":["HR","IT","FINANCE","MARKETING","IT"]}
df=pd.DataFrame(data)
print("\n",df,"\n")
print("\nsalary >60000\n",df[df["Salary"]>60000])

print("\nsalry descending order")
print(df.sort_values(by="Salary",ascending=False))

print("\nBonus\n")
df["Bonus"]=df["Salary"]*.1

print("\nnew df")
print(df)

df["total_salary"]=df["Salary"]+df["Bonus"]

print(df)

print("\nDisplay the average salary by department\n")

print(df.groupby("Department")["Salary"].mean())



