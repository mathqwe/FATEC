#include <stdio.h>
#include <stdlib.h>

int buscaSequencial(int vet[], int tam, int chave){
  for(int i = 0; i < tam; i++){
    if(vet[i] == chave){
      return i;
    }
  }
  return -1;
}

int main(void){
  int vet[] = {9,4,5,21,1999};
  
  printf("Buscando valor 21 - índice = %d\n\n", buscaSequencial(vet, 5, 21));//deve retornar 3
  return 0;
}