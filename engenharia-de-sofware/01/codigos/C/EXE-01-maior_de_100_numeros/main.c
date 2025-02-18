/*
Enunciado: Faça um programa que leia 1000 números e exiba o maior
- Descrever como testar o programa


*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
  unsigned int input;
  
  printf("Digite a seguir 1000 números inteiros não negativos!\n\n");
  printf("Caso seja inserido um número negativo, ele será transformado em positivo\n\n");
  printf("Exemplo: -x => x\n\nentre com um número: ");
  scanf("%d", &input);

  if(input < 0) {
    input = input + (-2 * input);
  }

  printf("Teste %d\n\n\n", input);
  return 0;
}