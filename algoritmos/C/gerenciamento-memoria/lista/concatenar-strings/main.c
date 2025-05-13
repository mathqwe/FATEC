//Esse programa recebe duas strings de tamanhos quaisquer, e, devolve a concatenação destas
//protótipo char *concatena(char *s1, char *s2);
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char *concatena(char *s1, char *s2){
  char *sres = NULL;
  int t = strlen(s1) + strlen(s2) - 2;//Tamanho total de índices do sres
  sres = malloc(t * sizeof(char));
  int j = strlen(s1) - 2;//Indices da primeira string sem o \0

  for(int i = 0; i < (strlen(s1) - 2); i++){
    sres[i] = s1[i];
  }

  int k = 0;

  for(j; j <= t; j++){
    sres[j] = s2[k];
    k++;
  }

  return sres;
}

int main(void){
  char s1[MAX];
  char s2[MAX];
  char *s3;

  printf("Esse programa lê duas strings e concatena seus valores em outra string usando alocação dinâmica da memória\n");
  printf("\nEntre com a primeira string s1: \n");
  fgets(s1, MAX, stdin);

  printf("\nEntre com a segunda string s2: \n");
  fgets(s2, MAX, stdin);
 
  s3 = concaten(s1, s2)
  printf("%s\n\n", s3);
  free(s3);

  return 0;
}