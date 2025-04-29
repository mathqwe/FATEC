#include <stdio.h>
#include <stdlib.h>

//Exemplo de passagem por valor
void naoTrocaValorDasVariaveisEmOutroEscopo(int x, int y) {
  int aux;
  aux = x;
  x = y;
  y = aux;
}

/*
  Algumas linguagens suportam passagem de parâmetros por referência, não o c, no caso. Nesse caso os valores
  das variáveis passadas por referência teriam seus valores trocados, pois alteraria seu valor até mesmo no
  escopo de chamada.

  - É possível obter um resultado semelhante em c, utilizando ponteiros.
*/

void trocaValorUsandoPonteiros (int *x, int *y) {
  int aux = *x;
  *x = *y;
  *y = aux;
}

int main(void){
  int x = 10, y = 20;

  //testando passagem por valor
  naoTrocaValorDasVariaveisEmOutroEscopo(x, y);
  printf("valor de x == %d | x != 10\n\ncvalor de y == %d | y != 20\n\n\n\n\n", x, y);// x = 10, y = 20

  //testando passagem de parâmetros utilizando ponteiros
  trocaValorUsandoPonteiros(&x, &y);// Passando endereços de memória como parâmetro
  printf("valor de x == %d | x != 10\n\ncvalor de y == %d | y != 20\n\n\n\n\n", x, y);// x = 20, y = 10


  return 0;
}