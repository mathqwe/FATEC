/*
Ler dois vetores com 5 inteiros cada.
Checar quais elementos do segundo vetor são iguais a algum elemento
do primeiro vetor.
Se não houver elementos em comum, o programa deve informar isso
*/
#include <stdio.h>

int main(void){
  int vet1[5];
  int vet2[5];
  int tem_elemento_em_comum = 0;

  printf("Digite a seguir 5 elementos um por linha, para o vetor 1: \n");
  for(int i = 0; i < 5; i++){
    scanf("%d", &vet1[i]);
  }

  printf("Agora digite a seguir 5 elementos um por linha para o vetor 2: \n");
  for(int i = 0; i < 5; i++){
    scanf("%d", &vet2[i]);
  }

  for(int i = 0; i < 5; i++){
    int j = 0;
    while(j < 5){
      if(vet1[i] == vet2[j]){
        printf("vet1[%d] == vet2[%d] || %d == %d\n", i, j, vet1[i], vet2[j]);
        tem_elemento_em_comum = 1;
      } 
      j++;
    }
  }

  if(!tem_elemento_em_comum){
    printf("Nenhum elemento em comum!\n\n\n");
  }
  return 0;
}