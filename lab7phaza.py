import matplotlib.pyplot as pyp
import numpy as np
data = np.loadtxt("phaza.txt")
pyp.plot(data[:, 0], data[:, 1])
pyp.show()
