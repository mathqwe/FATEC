#list é um tipo de dado em python, uma coleção de dados, um agrupamento.
#Diferente dos arrays em algumas linguagens, aqui os elementos NÃO tem relação obrigatória
#Boa prática: nome em plural. names, digits, letters, etc...

games = ['The Witcher', 'The Legend of Zelda', 'God of War', 'Call of Duty']
print(games) #sáida não formatada

print(games[0]) #printando indices de uma lista
print(games[0].lower()) #quando o indice correspondente de uma lista é uma string, seus métodos ainda valem

#indice -1 => list[-1] refere-se ao último item de uma lista em python
print(games[-1])#printa o game do ultimo indice da lista

#printando usando loop

#usando valores individuais de uma lista
message = 'My favorite game is: ' + games[1].title() + '.'
print(message)

#Alterando elementos numa lista
motorcycles = ['honda', 'yamaha', 'suzuki']
print(motorcycles)

motorcycles[0] = 'ducati'
print(motorcycles)

#colocando elementos no final de uma lista
protagonists = ['link', 'joel', 'kratos']
print(protagonists)
protagonists.append('geralt of rivia')#Método .append() adciona um elemento ao final da lista sem alterar os outros valores
print(protagonists)


#insert(i, value) Método de 2 argumentos para adicionar um elemento em um indice específico
lista = [1, 2, 3]
print(lista)
lista.insert(0, 0)#ad

#instrução del -> remove o indice de uma posição conhecida
lista = [1, 2, 3]
print(lista)
del lista[0]
print(lista)

#método pop() -> remove o indice do topo da pilha, nesse caso, remove o elemento último elemento da lista
#O método pop ainda permite que você use o elemento retirado da lista para armazenar em outro lugar
usuarios_ativos = ['matheus', 'Douglas', 'Priscila']
usuarios_inativos = []

print(usuarios_ativos)
print(usuarios_inativos)

usuarios_inativos.append(usuarios_ativos.pop())#=> o primeiro indice dos inativos recebe a priscila, que será retirada dos ativos

print(usuarios_ativos)
print(usuarios_inativos)

animais = ['gato', 'cachorro']
print(animais)
animais.pop(0)# o método pop remove também um indice qualquer, caso apontado
print(animais)

#metodo list.remove(value_of_index) => esse método tem como argumento o elemento e não seu índice
langs = ['c', 'java', 'python']
print(langs)

langs.remove('c') #remove o indice que tem o elemnto 'c' armazenado
print(langs)