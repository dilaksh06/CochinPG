#Writing Data in CSV
import pandas as pd
import numpy as np
frame = pd.DataFrame(np.arange(16).reshape((4,4)),
          index=['red', 'blue', 'yellow', 'white'],
          columns=['ball','pen','pencil','paper'])
print(frame)
print("file from program")
frame.to_csv('data.csv')
frame2 = pd.read_csv('data.csv')
print(frame2)
