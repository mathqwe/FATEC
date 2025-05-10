#Esse programa lê uma entrada n e imprime de 1 até n utilizando while

while True: 
  try:
    n = int(input("O número deve ser maior ou igual a 1: "))
    if n >= 1:
      break; # sai do loop caso o n atenda os critérios
    else:
      print("Entrada inválida, por favor digite número maior ou igual 1:")
  except ValueError:
    print("Entrada inválida, digite um número: ")

i = 1
while i <= n:
  print(i)
  i = i + 1