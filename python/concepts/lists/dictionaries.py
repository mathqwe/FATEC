#dict
#Se associa em mais de uma dimensão
alunos = {
  "Matheus": "ADS",
  "Lola": "ADM",
  "Lucas": "GTI",
  "Ana": "ARTES"
}

print(alunos)
#acessando apenas um valor, trata o primeiro campo como um índice de um vetor
print(alunos["Matheus"])#printa 'ADS'
#printando o indice e valor, no caso nome -> curso
for aluno in alunos:
  print(aluno, alunos[aluno], sep=" => ")#argumento sep="/"=> cria um separador para argumentos da função print

#lista de dicionários
personagens = [
  {"nome": "Geralt", "origem":"Rivia", "arma":"Espada"},
  {"nome": "Kratos", "origem": "Esparta", "arma": "Machado"},
  {"nome": "Link", "origem": "Hyrule", "arma": "Master Sword"}
]

for personagem in personagens:
  print(personagem["nome"])

for personagem in personagens:
  print(personagem["arma"])

for personagem in personagens:
  print(personagem["nome"], personagem["origem"], personagem["arma"], sep=" | ")