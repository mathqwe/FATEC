//Esse programa deve receber até 50 notas em valor real num vetor, e, retornar a média das notas
#include <stdio.h>

float mediaNotas(float vet[], int n){
  float media = 0.0;
  for(int i = 0; i < n; i++){
    media += vet[i];
  } 
  media = media / n;
  return media;
}

void printVet(float vet[], int n){
  for(int i=0; i<n; i++){
    printf("notas[%d] = %f\n", i, vet[i]);
  }
}

int main(void){
  float notas[50];
  float media = 0.0;
  int n;
  
  printf("Esse programa recebe até 50 notas em um vetor float\n");

  printf("Digite quantas notas deseja inserir: ");
  scanf("%d", &n);

  printf("A seguir digite o valor de cada nota um por linha:\n");
  
  for(int i =0; i<n; i++){
    scanf("%f", &notas[i]);
  }
  
  printf("\n\n\nLista de notas: \n");
  printVet(notas, n);

  media = mediaNotas(notas, n);
  printf("Media das notas = %f\n\n\n", media);
}

