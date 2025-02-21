#include <stdio.h>
#include <stdlib.h>

int main (void) {
  char c, x;
  int d;

  //Exemplo de leitura usando a função getchar() - a qual lê apenas um caractere
  printf("Digite um caractere: \n");
  c = getchar();// Lê apenas um caractere, mas o \n fica no buffer

  printf("Você digitou o caractere: %c\n\n\n", c);
  
  //Exemplo de leitura usando a função scanf, a qual lê não somente o valor digitado no teclado
  //Mas também lê o \n quando o usuário aperta o enter para enviar o valor de input no terminal
  printf("Agora digite um número: \n");
  scanf("%d", &d);

  //while (getChar () != "\n"); -  Lê e descarta os valores do buffer até achar o \n

  printf("E por último, digite um caractere: \n");
  scanf("%c", &x); //Pode acontecer de ler o \n digitado no input acima, no scanf() do valor d;

  printf("Valor digitado: %c \n\n\n", x);

  return 0;
}