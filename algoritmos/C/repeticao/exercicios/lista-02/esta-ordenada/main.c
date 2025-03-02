/*
  Esse programa recebe uma lista digitada pelo usuário e determina se ela está ordenada ou não
  Utilizar uma variável contadora
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  int inputedNum;
  int contadora = 0;; //deve valer n-1
  int anterior;
  printf("Esse Programa recebe uma lista de números inteiros e verifica se a lista está ordenada\n");
  printf("Digite um valor para n, sendo n a quantidade de números da lista: \n");

  while(scanf("%d", &n) != 1 || n <= 0) {
    printf("Valor inválido, digite o valor de n novamente: \n");
    while(getchar() != '\n');
  }

  printf("Digite a seguir uma sequência de %d números, um por linha: \n", n);
  scanf("%d", &anterior);

  for (int i = 1; i < n; i++) {
    scanf("%d", &inputedNum);
    
    if (inputedNum >= anterior) {
      contadora ++;
    }
  }

  if(contadora == (n - 1)) {
    printf("O Lista está perfeitamente ordenada\n");
    printf("A variável contadora ATENDEU a condição (n - 1) == contadora\n(%d - 1) == %d\nFIM!\n\n\n", n, contadora);
    return 0;
  } 
  else {
    printf("A lista está desordenada!\n");
    printf("A variável contadora NÃO atendeu a condição (n - 1) == contadora\n(%d - 1) != %d\nFIM!\n\n\n", n, contadora);
  }
  return 0;
}