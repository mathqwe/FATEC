#include <stdio.h>
#include <stdlib.h>

void lerVetor(int vet[], int tamVet){
  for(int i = 0; i < tamVet;i++){
    scanf("%d", &vet[i]);
  }
}

void maiorMenorVetor(int *maior, int *menor, int vet[], int tamVet){
  int auxMaior = vet[0], auxMenor = vet[0];

  for(int i = 1; i < tamVet; i++){
    if(vet[i] > auxMaior)
      auxMaior = vet[i];
  }
  for(int i = 1; i < tamVet; i++){
    if(vet[i] < auxMenor) {
      auxMenor = vet[i];
    }
  }

  *maior = auxMaior;
  *menor = auxMenor;
}

int main(void){
  int vet[10];
  int tamanho = 10;
  int maior, menor;

  printf("Digite a seguir, 10 números inteiros: ");
  lerVetor(vet, tamanho);

  maiorMenorVetor(&maior, &menor, vet, tamanho);

  for(int i=0; i<10; i++){
    printf("%d - ",vet[i]);
  }
  
  printf("\nMaior == %d\nMenor == %d\n\n\n", maior, menor);
  return 0;
}