import pandas as pd
import numpy as np
sr=pd.Series()
a=[10,20,30,40]
#print(pd.Series(a))

sr = pd.Series([10,20,30],index = ["x", "y", "z"])
sr["y"]=450
#print(sr)

#for i in sr.index:
    #print(i)

#for i in sr.values:
    #print(i)

print("\nmathemeatical operations\n")
#print((sr/2).astype(int))
#print(np.log(sr))


array1=np.array([1,2,3,4,5,6,7])
x=pd.Series(array1)
#print(x)

arr = np.arange(1, 10, 3)
#print(arr)



ser = pd.Series(np.arange(1,6), index=[np.arange(1,6)])
#print(ser)
sed=ser.drop(1)
#print(sed)


ser1 = pd.Series(np.arange(1,4), index=["a","b","c"])
#print(ser)
sedd=ser1.drop("a")
#print(sedd)


ser = pd.Series([0, 1, np.nan, 3, 9], index=['red','blue','yellow','white','green'])
#print(ser)
#print(ser.isnull().sum())
ser.dropna()
#print(ser.dropna())

data={"numbers":[1,2,3],"squares":[16,64,44]}
df=pd.DataFrame(data)
#print(df)

#print(df.loc[0:1])
df1=pd.DataFrame(data,index=["a","b","c"])
#print(df1)

df2=pd.DataFrame(data,index=["a","b","c"],columns=["numbers","squares"])
#print(df2)
#print(df2.columns)
#print(df2.index)
#print(df2)
#print(df2.drop("a"))
df2["half"]=[1,2,2]
#print(df2)
#print(df2.drop("half",axis=1))
#print(df2.drop("a"))
del df2['half']
#print(df2)

#print(df2.drop("half"))
#print(df2.values)

#for x in df2.values:
 #   for y in x:
  #      print(y)
#del df2
#print(df2)


matrix=np.arange(16).reshape((4,4))
#print(matrix)


s1 = pd.Series([3,2,5,1],['white','yellow','green','blue'])
#print(s1)

s2 = pd.Series([1,4,7,2,1],['white','yellow','black','blue','brown'])
#print(s2)

#print(s1+s2)
#print((s1+s2).dropna())
#print((s1+s2).isnull().sum())

frame1 = pd.DataFrame(np.arange(16).reshape((4,4)),
          index=['red', 'blue', 'yellow', 'white'],
          columns=['ball','pen','pencil','paper'])
ser = pd.Series(np.arange(4), index=['ball','pen','pencil','paper'])
#print(ser)


frame = pd.DataFrame(np.arange(16).reshape((4,4)),
          index=['red', 'blue', 'yellow', 'white'],
          columns=['ball','pen','pencil','paper'])
#print(frame)
print(frame["ball"].sum())




