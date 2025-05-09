//Criar e manter estruturas dinâmicas exige uma alocação dinâmica de memória
//Refere-se a capacidade que um programa possuí de obter mais memória durante a execução do programa
//Também a se livra de memória quando não se precisa mais
#include <stdio.h>
#include <stdlib.h>

void printVet(int *p, int n){
  for(int i = 0; i < n; i++){
    printf("p[%d] = %d\n", i, p[i]);
  }
}

int main(void){
  //malloc(n° de bytes a serem alocados) -> retorna um ponteiro do tipo void * (ponteiro pra void)
  //O ponteiro aponta para a memória alocada
  //Um ponteiro void pode ser atribuído para uma variável de qualquer tipo de ponteiro
  //Caso não haja memória disponível malloc retorna null

  int *p;
  p = malloc(100 * sizeof(int));//aloca um espaço para um vetor de 100 inteiros
  
  for(int i = 0; i < 100; i++){
    p[i] = 2 * i;
  }

  printVet(p, 100);

  return 0;
}