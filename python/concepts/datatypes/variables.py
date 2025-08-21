#integers
a = 10
b = 2
c = int((a * b) + (a / b))
d = a ** b #expodenciais a elevado a b

#floats
a = 10.0
b = 2.0001
c = 0.3

#booleans
are_you_hungry = True
are_they_brazilians = False

#strings
message = "Hello python world!"
new_message = 'Test...'

print(message.upper() )   # msg - MSG
print(message.lower())    # MSG - msg
print(message.title())    # msg - Msg Bla Bla

first_name = "matheus"
last_name  = "santana"
full_name  = first_name + " " + last_name #str concatenação

print(full_name)
print(full_name.title())
print(f"Hello, {full_name.title()}!")#fstring -> f"str{variável_str}"

#strings - removendo espaços em branco
#método rstrip() -> remove espaços a direita
favorite_language = "python   "
best_language = "python"

favorite_language = favorite_language.rstrip()

if favorite_language == best_language:
  print("As strings são iguais")
else:
  print("As strings são diferentes")

best_team = "São Paulo"
user_team = "   são pAULO"
user_team = user_team.lstrip().lower().title()

if best_team == user_team:
  print("São Paulo é o maior de todos")
else:
  print("Naah")

bad_msg = " Mensagem com espaços a direita e esquerda removidas com o método strip() "
good_msg = bad_msg.capitalize().strip()
print(good_msg)

