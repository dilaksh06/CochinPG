import numpy as np
import matplotlib.pyplot as plt

#xpoints=np.array([1,2,6,8])
#ypoints=np.array([1,2,6,8])
#plt.plot(xpoints,ypoints,'+--g')
#plt.show()

ypoints=np.array([3,81,10])
plt.plot(ypoints,color='g',marker='o',mfc='red',linestyle=":",linewidth='.5')
plt.title("hi")
plt.xlabel("x")
plt.ylabel("y")
plt.grid(axis='both')
plt.show()
