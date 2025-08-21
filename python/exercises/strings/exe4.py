"""
Armazene o nome de uma pessoa e inclua alguns caracteres em branco no início e no final do nome.
exiba o nome uma vez, de modo que os espaços em branco em torno do nome
sejam mostrados. Em seguida, exiba o nome usando cada uma das três funções de
remoção de espaços: lstrip(), rstrip() e strip().
"""
nome = input("Digite seu nome: ")
nome_alterado = f"\t\t\t{nome}\n"

print(nome)
print(nome_alterado)

print(nome_alterado.strip())
print(nome_alterado.lstrip())
print(nome_alterado.rstrip())