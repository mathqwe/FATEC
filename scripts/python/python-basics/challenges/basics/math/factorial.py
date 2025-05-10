import math

while True:
  try: 
    num = int(input("Digite um número inteiro: "))
    print(f"O fatorial de {num} = {math.factorial(num)}")
    break
  except ValueError:
    print("Valor inválido, digite novamente: ")
