import matplotlib.pyplot as pyp
import numpy as np
data = np.loadtxt("D:\Projects\C++\Modelirovanie\Lab7\Lab7\phaza.txt")
pyp.plot(data[:, 0], data[:, 1])
pyp.show()
