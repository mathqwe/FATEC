#include <stdio.h>

int linearSearch(int vet[], int n, int x){
  for(int i=0; i < n; i++){
    if(vet[i] == x)
      return i;
  }
  return -1;
}

int main(void){
  int lista[5] = {10, 8, 3, 1, 5};
  int x = 1;
  int resultado = 0;

  resultado = linearSearch(lista, 5, x);
  (resultado == -1)
    ? printf("O elemento não está presente na lista\n\n\n")
    : printf("O elemento %d está presente no índice %d\n\n\n", x, resultado);

  return 0;
}