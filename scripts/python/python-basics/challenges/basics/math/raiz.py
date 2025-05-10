import math
 
while True: 
  try:
    inp = int(input("Digite um número inteiro maior que 0: "))# Pode gerar um ValueError
    if inp >= 1:
     print(f"A raiz de {inp} é {math.sqrt(inp)}\n\n\n")
     break
    else:
      print("Digite um valor maior ou igual a 1!\n")
  except ValueError:
    print("Digite um valor numérico")