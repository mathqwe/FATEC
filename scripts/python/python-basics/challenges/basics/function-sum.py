def sum (a, b):
  return a + b

while True:
  try: 
    a = int(input("Digite um número: "))
    b = int(input("Agora digite outro número: "))

    if a >= 0 and b >= 0:
      print(f"O valor da soma é: {sum(a,b)}")
      break
    else:
      print("Você inseriu valores menores que 0, digite novamente!")
  except ValueError:
    print("Digite um valor numérico nas entradas! ")