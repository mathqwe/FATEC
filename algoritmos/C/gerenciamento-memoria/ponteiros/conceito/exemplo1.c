#include <stdio.h>
#include <stdlib.h>

int main(void){
  int num, q = 1;
  int *p;

  num = 100;
  p = &num;
  q = *p;

  //q => p => num
  printf("%d", q);//variavel que armazena um ponteiro
  //Deve imprimir 100
  return 0;
}