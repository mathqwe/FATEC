/*
  entender a  diferença entre:  Math.round(Math.random() * 5) + 1;  &&  Math.floor(Math.random() * 7);

  => Criar um programa que gere uma sequência de 100 números, apresentar o maior e o menor gerado pelas duas propostas
*/

let listaRound = [];
let maiorR, menorR;

let listaFloor = [];
let maiorF, menorF;

for (let i = 0; i <= 99; i++) {
  listaRound[i] = Math.round(Math.random() * 5) + 1; 
}

for (let i = 0; i <= 99; i++) {
  listaFloor[i] = Math.floor(Math.random() * 7); 
}

maiorR = listaRound[0];
for (let i = 0; i <= 99; i++) {
  if(listaRound[i] > maiorR) {
    maiorR = listaRound[i];
  }
}

menorR = listaRound[0];
for (let i = 0; i <= 99; i++) {
  if(listaRound[i] < menorR) {
    menorR = listaRound[i];
  }
}

maiorF = listaFloor[0];
for (let i = 0; i <= 99; i++) {
  if(listaFloor[i] > maiorF) {
    maiorF = listaFloor[i];
  }
}

menorF = listaFloor[0];
for (let i = 0; i <= 99; i++) {
  if(listaFloor[i] < menorF) {
    menorF = listaFloor[i];
  }
}


console.log(listaRound);
console.log(maiorR);
console.log(menorR);

console.log(listaFloor);
console.log(maiorF);
console.log(menorF);


console.log(listaRound.length);
console.log(listaFloor.length);