#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a[] = {1, 2, 3, 4, 5};
  int *p;
  p = a;//Não é nem necessário utilizar o &, pois um vetor já armazena um endereço de memória
  //Agora é possível utilizar p, como se fosse um vetor

  for(int i = 0; i < 5; i++) {
    printf("%d\n", p[i]);
  }

  return 0;
}