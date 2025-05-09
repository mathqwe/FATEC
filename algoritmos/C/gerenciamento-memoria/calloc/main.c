#include <stdio.h>
#include <stdlib.h>

int main(void){
  //calloc possúi como parâmetro o número de blocos de memória para ser alocados, e o tamanho dos bytes de cada bloco
  //Retorna um endereço de memória no início da região onde foi alocada, ou null caso tenho algum erro
  int *p;

  p = calloc(100, sizeof(int));

  /*
  for(int i = 0; i < 100; i++){
    p[i] = 2 * i;
  }
  */
  for(int i = 0; i < 100; i++){
    printf("%d\n", p[i]);
  }

  //a função calloc "zera" todos os bits da memória alocada, malloc não;
  //ou seja, com o calloc a memória é inicializada, enquanto com o malloc a memória não é inicializada
  return 0;
}