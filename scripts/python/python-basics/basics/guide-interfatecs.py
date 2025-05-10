# =====================
# FUNDAMENTOS DE PYTHON
# =====================

# 1. IF, ELIF, ELSE
x = 10
if x > 0:
    print("Positivo")
elif x == 0:
    print("Zero")
else:
    print("Negativo")


# 2. ESTRUTURAS DE REPETIÇÃO
for i in range(3):
    print("for loop:", i)

j = 0
while j < 3:
    print("while loop:", j)
    j += 1


# 3. LISTAS E OPERAÇÕES
lista = [1, 2, 3]
lista.append(4)
lista[0] = 10
print("Lista atualizada:", lista)

# Matriz
matriz = [[1, 2], [3, 4]]
print("Elemento da matriz:", matriz[1][0])

# List comprehension
quadrados = [x**2 for x in range(5)]
print("Quadrados:", quadrados)


# 4. STRINGS
texto = "  InterFatecs 2025  "
print(texto.strip().upper())
print("Número de letras 'e':", texto.count('e'))
print("É número?", texto.isdigit())
print("Começa com 'Inter'?", texto.strip().startswith("Inter"))


# 5. FUNÇÕES
def saudacao(nome):
    return f"Olá, {nome}!"

print(saudacao("Matheus"))

def fatorial(n):
    from math import factorial
    return factorial(n)

print("Fatorial de 5:", fatorial(5))


# 6. DICIONÁRIOS
pessoa = {"nome": "Lucas", "idade": 25}
pessoa["curso"] = "ADS"
print("Nome:", pessoa.get("nome"))
print("Curso:", pessoa.get("curso", "Não informado"))


# 7. CONJUNTOS
conjunto = {1, 2, 3}
conjunto.add(4)
print("Conjunto:", conjunto)
print("Tem 2?", 2 in conjunto)


# 8. CLASSES E OBJETOS
class Aluno:
    def __init__(self, nome, nota):
        self.nome = nome
        self.nota = nota

    def aprovado(self):
        return self.nota >= 6

a1 = Aluno("João", 7.5)
print(f"{a1.nome} aprovado?", a1.aprovado())


# 9. EXCEÇÕES
try:
    num = int(input("Digite um número inteiro: "))
    resultado = 10 / num
    print("Resultado:", resultado)
except ValueError:
    print("Você digitou algo que não é número!")
except ZeroDivisionError:
    print("Não é possível dividir por zero!")


# =====================
# MÓDULOS PADRÃO
# =====================

# 10. MATH
import math
print("Raiz de 144:", math.sqrt(144))
print("Log de 1000 na base 10:", math.log(1000, 10))
print("É aproximadamente igual?", math.isclose(0.1 + 0.2, 0.3))


# 11. COLLECTIONS
from collections import Counter, deque, defaultdict, namedtuple

contagem = Counter("interfatecs")
print("Contador:", contagem)

fila = deque()
fila.append("Ana")
fila.append("Bruno")
print("Saiu da fila:", fila.popleft())

frequencia = defaultdict(int)
for letra in "banana":
    frequencia[letra] += 1
print("Frequência:", dict(frequencia))

Pessoa = namedtuple("Pessoa", ["nome", "idade"])
p = Pessoa("Lucas", 20)
print("NamedTuple:", p.nome, p.idade)


# 12. HEAPQ
import heapq

numeros = [10, 1, 7, 3]
heapq.heapify(numeros)
heapq.heappush(numeros, 2)
print("Menor número removido:", heapq.heappop(numeros))
print("3 menores:", heapq.nsmallest(3, numeros))


# 13. ITERTOOLS
from itertools import permutations, combinations, product, cycle, accumulate

print("Permutações de 'abc':", list(permutations("abc")))
print("Combinações de [1,2,3] com 2:", list(combinations([1, 2, 3], 2)))
print("Produto cartesiano:", list(product([1, 2], ['A', 'B'])))
ciclo = cycle(["On", "Off"])
for _ in range(4):
    print("Ciclo:", next(ciclo))
print("Soma acumulada:", list(accumulate([1, 2, 3, 4])))


# 14. BISECT
from bisect import bisect_left, bisect_right, insort

ordenada = [10, 20, 30, 40]
print("Posição para inserir 25 (esq):", bisect_left(ordenada, 25))
print("Posição para inserir 25 (dir):", bisect_right(ordenada, 25))
insort(ordenada, 25)
print("Lista após insort:", ordenada)


# 15. EXTRAS ÚTEIS
print("Enumerate:")
for i, letra in enumerate("abc"):
    print(f"Posição {i}: {letra}")

print("Zip:")
nomes = ["Ana", "Bia"]
idades = [20, 25]
for nome, idade in zip(nomes, idades):
    print(nome, idade)

print("Palavra ao contrário:", ''.join(reversed("python")))

# Função para verificar se número é primo
def eh_primo(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

print("É primo 7?", eh_primo(7))

