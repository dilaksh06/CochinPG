import pandas as pd

df=pd.DataFrame({"Date":["2024-11-01","2024-11-02","2025-11-25"] ,"Product":["Laptop","Phone","Tablet"], "Sales":[50,400,40]})
print(df)

df_sales_gt_300=df[df['Sales']>300]
print(df_sales_gt_300)
            
df_sort_des_sales=df["Sales"].sort_values(ascending=False)
print(df_sort_des_sales)

df["Discount"]=df["Sales"]*0.1
print(df)

#df["total_sales"]=df["Product"]-df["Disount"]
#print(df)

df_group=df.groupby("Product")["Sales"].sum()
print(df_group)

grouped_avg_sales = df.groupby("Product")["Sales"].mean()
max_avg_product = grouped_avg_sales.idxmax()
print("\nProduct with the highest average sales:")
print(f"{max_avg_product}: {grouped_avg_sales[max_avg_product]}")


# Step 1: Create a DataFrame
data = {
    "Name": ["Alice", "Bob", "Charlie", "David", "Eve"],
    "Age": [10, 30, 22, 35, 28],
    "City": ["New York", "Los Angeles", "Chicago", "Houston", "Phoenix"]
}
df = pd.DataFrame(data)

print (df[df["Age"]>20],df["Name"])



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
print("\n\n")
print("\n\n")
print(grouped_total_sales)
print("\n\n")
print("\n\n")

# Find the product with the highest average sales
grouped_avg_sales = df.groupby("Product")["Sales"].mean()
print(grouped_avg_sales )
max_avg_product = grouped_avg_sales.idxmax()
print("\nProduct with the highest average sales:")
print(f"{max_avg_product}: {grouped_avg_sales[max_avg_product]}")
