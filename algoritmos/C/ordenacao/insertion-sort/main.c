#include <stdio.h>
#include <stdlib.h>

void insertionSort(int vet[], int tam){
  for(int i = 1; i < tam; i++){
    int chave = vet[i];
    int j = i - 1;

    while(j >= 0 && vet[j] > chave){
      vet[j+1] = vet[j];
      j--;
    }
    vet[j+1] = chave;
  }
}