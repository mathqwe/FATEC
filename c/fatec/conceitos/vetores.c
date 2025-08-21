#include <stdio.h>
#include <stdlib.h>

/*
Cuidado para não zoar a memória, ou mesmo, causar um segmentation fault, ao tentar atribuir valores para indices inexistentes
  vetor[5]
  vetor[3]=10;
  vetor[5]=5; -> erro
  vetor[-1]=1;-> erro
*/

/*
O tamanho dos vetores são sempre pré definidos, não podem ser alterados durantes o programa
  vet[10]; será sempre 10 índices etc... etc...
*/
int main(void){
  int notas[5];

  //atribuindo valores com loops
  for(int i = 0; i < 5; i++){
    scanf("%d", &notas[i]);
  }
  printf("\n\n\n");
  //printando valores com loops
  for(int i = 0; i < 5; i++){
    printf("%d\n", notas[i]);
  }

  //atribuição manual
  notas[0] = 10;
  notas[1] = 0;

  //printando valor manualmente
  printf("\nnotas[0] = %d\n", notas[0]);
  printf("\nnotas[1] = %d\n", notas[1]);
  return 0;
}