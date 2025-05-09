//Esse programa recebe duas strings de tamanhos quaisquer, e, devolve a concatenação destas
//protótipo char *concatena(char *s1, char *s2);
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char *concatena(char *s1, char *s2){
  char *sres = NULL;
  int t = strlen(s1) + strlen(s2);
  int i = 0;

  sres = malloc(t * sizeof(char));
  
  do{
    
  }

  for(int j = 0; (j < MAX && s2[j] != '\n'); j++){
    sres[i] = s2[j];
  }

  return sres;
}

int main(void){
  char s1[MAX];
  char s2[MAX];

  printf("Esse programa lê duas strings e concatena seus valores em outra string usando alocação dinâmica da memória\n");
  printf("\nEntre com a primeira string s1: \n");
  fgets(s1, MAX, stdin);

  printf("\nEntre com a segunda string s2: \n");
  fgets(s2, MAX, stdin);
 

  printf(concatena(s1,s2),"\n\n");

  return 0;
}