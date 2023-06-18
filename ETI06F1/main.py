import decimal
import math
from decimal import *

getcontext().prec = 30

pi = Decimal(3.141592654)

input_= [float(x) for x in input().split(' ')]

r1, d = input_[0], input_[1]

r2 = math.sqrt(-1*Decimal(d/2-r1)*Decimal(d/2+r1))

print(round(pi*Decimal(r2**2)*100)/100)