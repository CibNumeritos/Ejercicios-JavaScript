import numpy as np
from matplotlib import pyplot as plt

num_segmentos = 10000
rad = 2
cx = 2
cy = 0
divisiones = int(input("Ingrese el numero de divisiones de esa mondá"))

angulo = np.linspace(0, 2*np.pi, num_segmentos+1)
x = rad * np.cos(angulo) + cx
y = rad * np.sin(angulo) + cy

anguloPoligono = np.linspace(0, 2*np.pi, divisiones+1)

xpoligono = rad * np.cos(anguloPoligono) + cx
ypoligono = rad * np.sin(anguloPoligono) + cy

print(xpoligono, ypoligono)

def line(x1,y1,x2,y2):
    plt.plot([x1,x2],[y1,y2],'k-', color='red')

for i in range(len(xpoligono) - 1):
    linea = np.linspace((xpoligono[i], ypoligono[i]), (cx, cy))
    line(xpoligono[i], ypoligono[i], cx, cy)

plt.plot(x, y, color="red", markersize=1)
plt.plot(xpoligono, ypoligono, color="red", markersize=1)

plt.title("Circulos")
plt.xlabel("X")
plt.ylabel("Y")
plt.gca().set_aspect('equal')
plt.grid()
plt.show()
