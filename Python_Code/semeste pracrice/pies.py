import numpy as np
import matplotlib.pyplot as plt

y=np.array([35,25,25,15])
mylabels=["APples","Banana","Cherries","Dates"]
myexplode=[0.1,0.1,0.1,0.1]
plt.pie(y,labels=mylabels,explode=myexplode)
plt.show()
