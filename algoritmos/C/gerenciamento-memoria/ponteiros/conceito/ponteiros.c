//Anotações aula sobre ponteiros
// Ponteiros: Tipos especiais de dados que armazanam ENDEREÇOS DE MEMÓRIA
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //declaração de ponteiro, ponteiro pra int só aponta para variável int, assim por diante...
  int *mema;
  float *memb;
  int a = 10;
  int aux;
  float b = 10.8;

  //operadores ponteiros
  mema = &a; //& retorna o endereço de memória de uma variável
  // A partir daqui, mema possui o valor do endereço de memória de a, *mema possui o valor 10
  printf("a = %d == *mema = %d\n\n\n", a, *mema);
  *mema = 11;//como mema aponta para a, a passa a valer 11
  printf("a == %d | *mema == %d\n\n\n", a, *mema);

  //operador * é sobrecarregado, multiplicação e ponteiros
  aux = 10 * (*mema);//aux passa a valer 110;
  printf("aux = %d\n", aux);

  return 0;
}