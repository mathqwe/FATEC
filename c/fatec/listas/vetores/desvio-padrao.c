//Esse programa armazena até 50 números e calcula o desvio padrão
#include <stdio.h>
#include <math.h>
#define MAX 50

void leVet(float vet[], int n){
  for(int i=0; i < n; i++){
    scanf("%f", &vet[i]);
  }
}

float mediaVet(float vet[], int n){
 float media = 0.0;

 for(int i=0; i<n; i++){
  media+= vet[i];}
 return (media/n);
}

float desvioPadrao(float vet[], int n, float media){
  float desvio = 0.0;
  for(int i=0; i<n; i++){
    desvio += pow((vet[i] - media), 2);
  }
  return sqrt(desvio / (n-1));
}


int main(void){
  float numeros[MAX];
  int n;
  float media;

  printf("Digite quantos números deseja inserir(max = 50): ");
  scanf("%d", &n);

  if(n < 2 || n > 50)
    return 1;

  printf("Digite a seguir, %d números 1 por linha:\n", n);
  leVet(numeros, n);
  media = mediaVet(numeros, n);
  
  float desvio = desvioPadrao(numeros, n, media);
  printf("Média dos valores = %f\nDesvio padrão dos valore = %f\n", media, desvio);

  return 0;
}
