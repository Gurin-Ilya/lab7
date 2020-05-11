import matplotlib.pyplot as pyp
import numpy as np
data = np.loadtxt("D:\Projects\C++\Modelirovanie\Lab7\Lab7\y.txt")
pyp.plot(data[:, 0], data[:, 1])
data = np.loadtxt("D:\Projects\C++\Modelirovanie\Lab7\Lab7\y1.txt")
pyp.plot(data[:, 0], data[:, 1])
pyp.show()

