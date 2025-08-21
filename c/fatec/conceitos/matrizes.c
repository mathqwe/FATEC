#include <stdio.h>
//tipo variavel[][][] => matriz de 3 dimensões
int main(void){
  int matriz[4][4]; 

  matriz[0][0] = 1;

  //prenchendo valores de uma matriz bidimensional
  for(int i = 0; i < 4; i++){
    for(int j = 0; j <  4; j++){
      printf("valor para matriz[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  //print em valores de uma matriz bidimensional
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
    }
  }
  
  return 0;
}