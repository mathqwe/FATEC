p1 = input("").split()
p2 = input("").split()

cod1 = int(p1[0])
n1   = int(p1[1])
v1   = float(p1[2])

cod2 = int(p2[0])
n2   = int(p2[1])
v2  = float(p2[2])

valor = (n1 * v1) + (n2 * v2)
print(f'VALOR A PAGAR: R$ {"{:.2f}".format(valor)}')