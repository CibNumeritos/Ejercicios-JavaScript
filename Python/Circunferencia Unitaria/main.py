import numpy as np
import math
from matplotlib import pyplot as plt
from matplotlib import animation

figure = plt.figure()
ax = plt.subplot()

a = 0

def refresh(i):
    
    global a
    a = a + 0.008 if i >= 0 else a - 0.008
    
    ax.clear()

    plt.axhline(0, color="black", alpha=0.4)
    plt.axvline(0, color="black",alpha=0.4)
    
    line(0, 0, math.cos(a), math.sin(a), "blue")
    line(0, 0, math.cos(a), 0, "red")
    line(math.cos(a), 0, math.cos(a), math.sin(a), "green")

    plt.plot(x, y, color="black", markersize=1)
    
    plt.grid()
    
    return figure

anim = animation.FuncAnimation(figure, refresh, frames = 10000, interval = 10, blit = False)

rad = 1
cx = 0
cy = 0

angulo = np.linspace(0, 2*np.pi, 1000)
x = rad * np.cos(angulo) + cx
y = rad * np.sin(angulo) + cy


def line(x1,y1,x2,y2, col):
    plt.plot([x1,x2],[y1,y2],'k-', color=col)

plt.title("Circulos")
plt.xlabel("X")
plt.ylabel("Y")
plt.gca().set_aspect('equal')
plt.show()
