import pandas as pd

data=pd.Series([5, 10, 15, 20, 25],index=['a', 'b', 'c', 'd', 'e'])
print(data['c'])
print(data.iloc[3])

data = pd.Series([1, 2, 3], index=['x', 'y', 'z'])
data['w']=4
data['x']=10
data=data.drop('y')
print(data)

data=pd.Series([3, 6, 9, 12, 15])
data_mul_2=data*2
print(data_mul_2)

data=pd.Series([40, 10, 30, 20],index=['p', 'q', 'r', 's'])
data_ascending_values=data.sort_values()
print(data_ascending_values)
print(data.rank())

data = pd.Series([5, None, 15, None, 25])
print(data.fillna(0))
print(data.dropna())

data = pd.Series(['1', '2', '3'])
print(data.astype(int))

print(data.astype(int)+5)

data=pd.Series(['apple','banana','cherry'])
print(data.str.upper())
print(data.str.contains('a'))

data = pd.Series([10, 20, 10, 30, 20, 10])
print(data.groupby(data).sum())
