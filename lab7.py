import matplotlib.pyplot as pyp
import numpy as np
data = np.loadtxt("y.txt")
pyp.plot(data[:, 0], data[:, 1])
data = np.loadtxt("y1.txt")
pyp.plot(data[:, 0], data[:, 1])
pyp.show()

