from math import sin,pi
import matplotlib.pyplot as plt
N = 168
x = range(N)
y = N*[0]
for i in x:
    y1 = 4/pi*sin(2*pi*i/N)
    y2 = 4/(3*pi)*sin(6*pi*i/N)
    y3 = 4/(5*pi)*sin(10*pi*i/N)
    y[i] = y1+y2+y3
y = 3*y
x = range(3*N)
plt.plot(x,y)
plt.show()
    