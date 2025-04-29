#include <stdio.h>
#include <stdlib.h>

void insertionSort(int vet[], int n){
  for(int i = 1; i < n; i++){
    int chave = vet[i];
    int j = i - 1;

    while(chave >= 0 && vet[j] > chave){
      vet[j + 1] = vet[j];
      j--;
    }
    vet[j+1] = chave;
  }
}

int binarySearch(int vet[], int n, int chave){
  int inicio = 0;
  int fim = n - 1;

  while(inicio <= fim){
    int meio = (inicio + fim) / 2;

    if(vet[meio] == chave) 
      return meio;//ou chave
    else if(vet[meio] < chave)
      inicio = meio + 1;
    else
      fim = meio - 1;
  }
  return -1;
}


int main(void){
  int vet[] = {3,5,4,19,20};

  printf("Vetor Desordenado\n");
  for(int i = 0; i < 5; i++){
    printf("%d\n", vet[i]);
  }

  insertionSort(vet, 5);
  printf("\n\nVetor Ordenado\n");
  for(int i = 0; i < 5; i++){
    printf("%d\n", vet[i]);
  }

  printf("\nPesquisando pelo elemento 19\nSeu índice é %d\n\n\n", binarySearch(vet, 5, 19));

  return 0;
}