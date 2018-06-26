import math

a=int(input())
b=int(input())
c=int(input())

d=b*b-(4*a*c)
d=math.sqrt(d)

r1=((-1*b)+(d))/(2*a)
r2=((-1*b)-(d))/(2*a)

print(r1)
print(r2)