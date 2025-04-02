//jogo de moedas
//2, 3, 4 ou 5 moedas
//O jogador determina o número máximo de jogadas que o simulador pode tentar
//Cada modeda pode ser 0, ou 1. (Cara ou coroa)
//Math.floor(Math.random() * 2); => Gera um número aleatório 0 ou 1
//
//
//
//
const readlineSync = require('readline-sync');

let qtdMoedas,jogadaUsr, att;
let crtl = 1;//Quando 0 acaba o programa

function recolheJogada (qtd) {
  var vetJogadas = [];

  for(let i = 0; i < qtd; i++) {
    vetJogadas[i] = readlineSync.question('moeda '+(i+1)+' digite 0 para cara, 1 para coroa: ');
    
    while(vetJogadas[i] != 1 && vetJogadas != 0) {
      vetJogadas[i] = readlineSync.question('Valor inválido, digite novamente: ');
    }
  }
  return vetJogadas;
}

do {
  console.log("Jogo das moedas - 2,3,4 ou 5 moedas");
  qtdMoedas = readlineSync.question('Digite a quantidade de moedas do jogo');
  
  while (qtdMoedas !=  2 && qtdMoedas != 3 && qtdMoedas != 4 && qtdMoedas != 5) {
    qtdMoedas = readlineSync.question('Quantidade inválida, digite novamente: ');
    console.log(qtdMoedas);
  }
  
  att = readlineSync.question('Digite a quantidade de tentativas que o simulador terá: ');
  while(qtdMoedas == NaN && qtdMoedas  < 0 && qtdMoedas > 1000) {
    att = readlineSync.question('Valor inválido, digite um número entre 100 e 1000: ');
  }

  jogadaUsuario = recolheJogada(qtdMoedas);
  
  console.log(jogadaUsuario);

  crtl = 0; //teste
} while (crtl != 0);


