//Arrays => são um tipo de objeto em javascript
var lista = []

for(let i = 0; i < 10; i++) {
  lista[i] = i + 1
}

console.log(lista)
console.log(`typeof(lista) => ${typeof(lista)}`)

//Registros (estruturas), objetos compostos
var agenda = [
  {
    nome: "Matheus",
    cpf: "412.689.218-40",
    numero: 19986064654
  },
  {
    nome: "Ana",
    cpf: "412.111.111-11",
    numero: 19999999999
  }
]

console.log(agenda)//Exibe vetor de objetos inteiro
console.log(agenda[0])// Apenas o índice 0
console.log(agenda[1]) 

//atribuição de valores de estruturas
agenda[2] = {nome: "nome", cpf: "4876218341", numero: 123412654}

console.log(agenda[2])

//Propriedaes básicas de arrays
//length
var vetorGrande = []
for(let i = 0; i < 100; i++){
  vetorGrande[i] = i+1
}

console.log(vetorGrande.length)//Deve retornar 100

//indefOf() => Função que retorna o índice de um elemento em um vetor
var vetString = ["Math", "Thais", "Marta", "Marcos"]
vetString.indexOf("Math")//Retorna 0
console.log("vetString.indexOf(math) => "+vetString.indexOf("Math"))


//push - adiciona um elemento ao final do vetor
console.log(vetString)
vetString.push("Adcionado para o final com push")//Copia o elemento para o final do vetor
console.log(vetString)

//unshift - adiciona um elemento no primeiro índice do vetor
vetString.unshift("Elemento adicionado ao início com unshift")
console.log(vetString)

//pop() - remove o último elemento do vetor
vetString.pop()
console.log(vetString)

//shift() - remove o primeiro índice do vetor
vetString.shift()
console.log(vetString)

//concat() => Concatena um vetor a outro sem alterar seus valores
//novoVetor = vetor1.concat(vetor2)
var num = [1,2,3,4,5]
var num2 = [6,7,8,9,10]
var numeros = num.concat(num2) // Junta num com num2 em um novo vetor: 1,2,3,4,5,6,7,8,9,10

console.log(num)
console.log(num2)
console.log(numeros)
console.log(num.concat(num2))

//slice() => permite a criação de um vetor a partir de valores selecionados do vetor original