/*
  Ler dois vetores de dimensão 5 e computar o produto interno destes
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
  int vet1[5], vet2[5], produto = 0;

  printf("Digite a seguir os 5 valores da lista A, um por linha: \n");
  for(int i = 0; i < 5; i++){
    scanf("%d", &vet1[i]);
  }

  printf("\nDigite agora os 5 valores da lista B, um por linha: \n");
  for(int i = 0; i < 5; i++){
    scanf("%d", &
      
      vet2[i]);
  }

  for(int i = 0; i < 5; i++){
    produto += vet1[i] * vet2[i];
  }

  printf("O produto interno entre o vetor A e B é = %d\n\n\n", produto);

  return 0;
  }