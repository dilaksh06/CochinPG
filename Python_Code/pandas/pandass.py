
import pandas as pd
import numpy as np

print ("this is first pandas program")
a = [10, 20, 30]

sr = pd.Series(a)

print(sr)

print(sr.index)
print(sr.values)
sr[0]=45

print(sr/2)

print(sr**2)

sr3=pd.Series([5,-3,pd.NA,14])
print(sr3)

print(type(pd.NA))

