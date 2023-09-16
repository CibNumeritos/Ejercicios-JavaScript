import math
import sys
def integral(b, B, intervalos):
    h = (B - b) / intervalos
    integral = 0.5 * (f(b) + f(B))
    for i in range(0, intervalos):
        _integral = b + i * h
        # print(f"Xi (i = {i}): {_integral}")
        integral += f(_integral)
        # print(f"Integral (i = {i}): {integral}")
    print(f"integral antes de multiplicar por h: {integral}")
    integral *= h
    return integral
def f(x):
    return math.pow(x, 2)+5*x
_b = float(input("ingrese el limite inferior: "))
_B = float(input("ingrese el limite superior: "))
_n = int(input("ingrese el numero de divisiones: "))
print(f"epsilon {math.e}")
print(integral(_b, _B, _n))
# print(0 + 3 * 0.2)
