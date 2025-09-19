#include <stdio.h>

void insertionSort(int numeros[], int n);
void printVet(int vet[], int n);

int main(void){
  int numeros[] = {19, 8, 2, 4, 7, 201, 11, 1111, 7, 9};//[10]  
   printVet(numeros, 10);
   insertionSort(numeros, 10);
   printVet(numeros, 10);
  return 0;
}

void insertionSort(int numeros[], int n){
  for(int i=0; i<n; i++){
    int chave = numeros[i];
    int j = i-1;

    while(j >= 0 && numeros[j] > chave){
      numeros[j+1] = numeros[j];
      j--;
    }
    numeros[j+1] = chave;
  }
}

void printVet(int vet[], int n){  
  for(int i=0; i<n; i++){
    printf("%d\n", vet[i]);
  }
}