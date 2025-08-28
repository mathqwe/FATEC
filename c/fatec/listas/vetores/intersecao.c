//Esse programa lê dois vetores de inteiros de até 50 elementos e num terceiro vetor armazena a interseção destes
#include <stdio.h>
#define MAX 10

void leVet(int vet[], int n);
void printVet(int vet[], int n);
void intersecao(int vet1[] , int vet2[], int n, int inter[]);

int main(void){
  int vet1[MAX];
  int vet2[MAX];
  int inter[MAX];


  printf("Digite a seguir os elementos do vetor 1, %d inteiros 1 por linha: \n", MAX);
  leVet(vet1, MAX);
  printf("Digite a seguir os elementos do vetor 2, %d inteiros 1 por linha: \n", MAX);
  leVet(vet2, MAX);

  intersecao(vet1, vet2, MAX, inter);

  printVet(vet1, MAX);
  printVet(vet2, MAX);
  printVet(inter, MAX);
  

  return 0;
}

void leVet(int vet[], int n){
  for (int i=0; i<n; i++){
    scanf("%d", &vet[i]);
  }
}

void printVet(int vet[], int n){
  for(int i=0; i<n; i++){
    printf("vet[%d] = %d\n", i, vet[i]);
  }
} 

void intersecao(int vet1[], int vet2[], int n, int inter[]){
  int aux = 0;

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(vet1[i] == vet2[j] && vet1[i] != inter[aux]){
        inter[aux] = vet1[i];
        aux++;
        break;
      }
    }
  }
}
