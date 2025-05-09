#the input function return the entered data as a string

name = input("Digite seu nome: ")
age  = input("\nDigite sua idade: ")

print(f"Olá {name}, você tem {age} anos")

age = int(age)
age += 10

print(f"Daqui 10 anos você terá {str(age)} anos")