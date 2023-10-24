import numpy as np
import matplotlib.pyplot as plt
from matplotlib import animation
figure = plt.figure()
ax = plt.subplot()
plt.plot(0, 0)

t = np.linspace(-2 * np.pi , 2 * np.pi, 500)
b = 1
a = 2

def refresh(i):
    a = b * (0.01 * i) if i < 500 else b * (0.01 * (1000 - i))  
    x = np.sin(a * t)
    y = np.sin(b * t)
    ax.clear()
    plt.plot(x, y, lw=2)
    return figure

anim = animation.FuncAnimation(figure, refresh, frames = 1000, interval = 10, blit = False)

plt.show()
