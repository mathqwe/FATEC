#Esse programa verifica se o usuário gostaria de comida

inp = input("Você está com fome? s/n, ou S/N: ");

if inp == "s" or inp == "S":
  print("Aqui está sua comida!\n\n\n")
elif inp == "n" or inp =="N":
  print("Ok, você está sem fome\n\n\n")
else:
  print("Resposta inválida\n\n\n")