#include <stdio.h>
#include <stdlib.h>

void printArray(int vet[], int n);
void selectionSort(int vet[], int n);
void insertionSort(int vet[], int n);
void bubbleSort(int vet[], int n);

int main(void){
  int vet1[] = {10, 9, 8, 7, 2};
  int vet2[] = {2, 10, 3, 1, 0};
  int vet3[] = {10, 2, 1, 100, 0};
  int n = 5;

  printf("Ordenando um array utilizando Selection sort: \n");
  printf("Array atual: \n");
  printArray(vet1, n);  
  selectionSort(vet1, n);
  printf("Array ordenado: \n");
  printArray(vet1, n);

  return 0;
}

void printArray(int vet[], int n){
  int i = 0;
  while(i < n){
    printf("vet[%d] = %d\n", i, vet[i]);
    i++;
  }
}

void selectionSort(int vet[], int n){
  for(int i = 0; i < (n-1); i++){
    int min_idx = i;//Índice mínimo

    for(int j = (i+1); j < n; j++){
      if(vet[j] < vet[min_idx])
        min_idx = j;
    }
    int aux_key = vet[i];
    vet[i] = vet[min_idx];
    vet[min_idx] = aux_key;
  }
}

void insertionSort(int vet[], int n){
  for(int i = 1; i < n; i++){
    int key = vet[i];
    int j = i-1;//Representa a parte já ordenada do array

    for(j; j >= 0 && vet[j] > vet[i]; i--){
      vet[j+1] = vet[j];
    }
  }
}