//Encontar o menor elemento a partir da posição 0
//Trocar esse elemento com o da posição 0

//Encontrar menor elemento a partir da posição 1
//Trocar esse elemento com o elemento da posição 1

//Assim por diante 

#include <stdio.h>
#include <stdlib.h>


void selectionSort(int vet[], int tam){
 for(int i = 0; i < tam-1; i++){
  int min = i;// Definindo a posição miníma do vetor

  //Comparação de índices
  for(int j = i + 1; j < tam; j++){
    if(vet[j] < vet[min])
      min = j;//índice mínimo recebe o índice subsequênte
  }

  //Trocando o menor elemento encontrado com o elemento da posição atual
  if(min != i){
    int tmp = vet[i];
    vet[i] = vet[min];
    vet[min] = tmp;
  }
 }
}

int main(void){
  int vet[] = {943, 2, 65, 1, 32};

  printf("Vetor desordenado\n");
  for(int i = 0; i < 5; i++){
    printf("%d\n", vet[i]);
  }

  selectionSort(vet, 5);
  printf("\n\nVetor ordenado \n");
  for(int i = 0; i < 5; i++){
    printf("%d\n", vet[i]);
  }
 
  return 0;
}