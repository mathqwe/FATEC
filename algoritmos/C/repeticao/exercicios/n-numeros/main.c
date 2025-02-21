/*
  Esse programa deve ler um inteiro positivo n. Em seguida, deve ler n números do teclado 
  e apresentar a soma de todos eles.
*/

#include <stdio.h>
#include <stdlib.h>


int main (void) {
  int n = 0;
  int inputNum;
  int somaTotal = 0; //variável acumuladora

  printf("Digite um número inteiro positivo: ");

  if ((scanf("%d", &n) != 1) || (n <= 0)) {
    printf("O Valor digitado é menor ou igual 0!\nFIM!\n\n\n");
    return 1;
  } else {
    printf("Agora digite %d números inteiros quaisquer. Um por linha: \n", n);
    
    for(int i = 1; i <= n; i++) {
      if(scanf("%d", &inputNum) != 1) {
        printf("O valor digitado é inválido!\n");
        printf("A soma total dos valores é = %d\nFIM!\n\n\n", somaTotal);
        return 1;
      } else {
        somaTotal += inputNum;
      }
    }

    printf("A soma total dos %d números é %d\n\n\n", n, somaTotal);
  }

  return 0;
}