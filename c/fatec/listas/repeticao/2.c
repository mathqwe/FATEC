/*
Faça um programa que lê dois números inteiros positivos a e b. Utilizando laços, o seu
programa deve calcular e imprimir o valor a ^ b
*/
#include <stdio.h>

int main(void){
  int a, b;
  int ac = 0;

  printf("Digite o valor de a: ");
  scanf("%d", &a);
  
  printf("Agora digite o valor de b: ");
  scanf("%d", &b);

  ac = a * a;

  for(int i = 2; i < b; i++){
    ac = ac * a;
  }

  printf("O resultado de A ^ B = %d\n", ac);

  return 0;
}