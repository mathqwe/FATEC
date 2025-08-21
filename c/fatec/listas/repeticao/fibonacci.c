#include <stdio.h>

int main(void){
  int tamanho_sequencia;

  printf("Digite quantos números da sequência fibonacci você deseja imprimir: ");
  scanf("%d", &tamanho_sequencia);
  int chave = 2;

  if(tamanho_sequencia == 1){
   printf("%d\n", 1);
  }
  else if (tamanho_sequencia == 2){
    printf("%d\n", 1);
    printf("%d\n", 1);
  }
  else if(tamanho_sequencia == 3){
     printf("%d\n", 1);
     printf("%d\n", 1);
     printf("%d\n", 2);
  }
  else if(tamanho_sequencia == 4){
     printf("%d\n", 1);
     printf("%d\n", 1);
     printf("%d\n", 2);
     printf("%d\n", 3);
  } 
  else { 
    int anterior1 = 3;
    int anterior2 = 2;

    printf("%d\n", 1);
    printf("%d\n", 1);
    printf("%d\n", 2);
    printf("%d\n", 3);

   for(int i = 5; i <= tamanho_sequencia; i++){
     chave = anterior1 + anterior2;
     printf("%d\n", chave);

     int aux = anterior1;
     anterior1 = chave;
     anterior2 = aux;
    }
  }

  
  return 0;
}

//printf("%d\n", chave);