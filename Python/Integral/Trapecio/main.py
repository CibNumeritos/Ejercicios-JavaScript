
import math
import sys
import numpy as np
import matplotlib.pyplot as plt

def integral(b, B, intervalos):
    h = (B - b) / intervalos
    integral = 0.5 * (f(b) + f(B))
    for i in range(0, intervalos):
        _integral = b + i * h
        # print(f"Xi (i = {i}): {_integral}")
        integral += f(_integral)
        # print(f"Integral (i = {i}): {integral}")
    integral *= h
    return integral

def f(x):
    return math.pow(x, 3)+2

_b = float(input("ingrese el limite inferior: "))
_B = float(input("ingrese el limite superior: "))
_n = int(input("ingrese el numero de divisiones: "))

x_values = np.linspace(_b, _B, 1000000)  
y_values = [f(x_val) for x_val in x_values]  # Valores de y correspondientes a la función

plt.plot(x_values, y_values, label=f'Función f(x)',  color='tab:blue')
plt.xlabel('x')
plt.ylabel('f(x)')
plt.legend()

plt.xlim(_b - 2, _B + 2)
plt.ylim(min(y_values) - 2, max(y_values) + 2 )
plt.grid(True)

plt.axhline(0, color="black")
plt.axvline(0, color="black")

plt.fill_between(x_values, y_values, color='tab:cyan',alpha=0.4)

print(integral(_b, _B, _n))

plt.show()
# print(0 + 3 * 0.2)
