import math

a, b = 5, 12
c = int(math.sqrt((a*a)+(b*b)))

print(f"Diketahui:\nAlas = {a} cm\nTinggi = {b} cm\n")
print(f"Jawab:\nSisi A = {a} cm\nSisi B {b} cm\nSisi C = {c} cm")
print(f"Keliling = {a+b+c} cm\nLuas = {int((a*b)/2)} cm")