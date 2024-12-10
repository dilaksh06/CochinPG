import pandas as pd
data = [10, 20, 30, 40]
series = pd.Series(data)
print(series)
series[1]=45
#print(series)
print(series.index)
print(series.values)



data = pd.Series([10, 20, 30, 40, 50], index=['a', 'b', 'c', 'd', 'e'])





# Creating a Pandas Series
data = pd.Series([10, 20, 30], index=['a', 'b', 'c'])

# Inserting a new value at a specific index
data['d'] = 40  # Adds a new element with index 'd'
print(data)


# Inserting at the beginning
data['z'] = 50  # Adds a new element with index 'z'
#data = data.sort_index(ascending=True)  # Sort to maintain order
print(data)


# Deleting an element by index
data = data.drop('c')


# Using apply with a condition to label values
data_labels = data.apply(lambda x: 'High' if x > 50 else 'Low')


# Creating two Series
s1 = pd.Series([1, 2, 3], index=['a', 'b', 'c'])
s2 = pd.Series([4, 5, 6], index=['b', 'c', 'd'])

# Combining into a DataFrame based on index
appended = s1._append(s2)
#print(appended)


import pandas as pd

# Original Series
data = pd.Series([10, 20, 30], index=['a', 'b', 'c'])
print("Original Series:")
print(data)
print(f"Original Series Memory Address: {id(data)}")

# Adding a new value
data['d'] = 40
print("\nSeries After Adding New Element:")
print(data)
print(f"Updated Series Memory Address: {id(data)}")



import pandas as pd

# Series with repeated values
data = pd.Series([10, 20, 30, 40, 10, 30, 20, 40], index=['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'])

# Grouping by values and counting occurrences
grouped = data.groupby(data)

print("\ngroup by data and count\n")
print(grouped.count())

print("\nindex of grouped data\n")
print(grouped.count().index)

result=data.groupby(data)

print("\nmax value of grouped data\n")

result_o=result.max()
print(result_o)

print(data.max())
