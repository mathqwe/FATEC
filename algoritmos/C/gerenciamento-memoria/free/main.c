#include <stdio.h>
#include <stdlib.h>

int main(void){
  //A função free libera memória, ou seja a memória é retornada ao sistema, de modo que possa ser realocada no futuro
  //Recebe como parâmetro um ponteiro e libera memória previamente alocada e apontada pelo ponteiro

  int *p;

  p = calloc(100, sizeof(int));

  for(int i = 0; i < 10; i++){
    printf("%d\n", p[i]);
  }

  free(p); //Sempre utilizar quando a memória não for mais necessária

  //Irá imprimir lixo de memória, já que o ponteiro p foi préviamente desalocado
  for(int i = 0; i < 10; i++){
    printf("%d\n", p[i]);
  }
}