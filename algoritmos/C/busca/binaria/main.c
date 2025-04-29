//O vetor deve estar ordenado
#include <stdio.h>
#include <stdlib.h>

int binarySearch(int vet[], int tam, int chave){
  int inicio = 0;
  int fim = (tam -1);

  while(inicio <= fim){
    int meio = (inicio + fim) / 2;

    if(vet[meio] == chave)
      return meio;
    else if(vet[meio] < chave)
      inicio = meio + 1;
    else 
      fim = meio - 1;
  }
  return -1;
}

int main(void){

  return 0;
}