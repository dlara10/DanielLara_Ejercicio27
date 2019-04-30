import os
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

data = np.loadtxt("condensador.dat")
plt.figure()
pt.imshow(data)
plt.savefig("potencial.png")