/*
Fazer um programa que lê números do teclado e informa qual foi o
maior número lido
*/
#include <stdio.h>

int main(void){
  int n;
  int num, maior;

  printf("Quantos números deseja digitar?\t: ");
  scanf("%d", &n);
  printf("Digite agora %d números, um por linha: \n");
  scanf("%d", &maior);

  for(int i = 2; i <= n; i++){
    scanf("%d", &num);
    if(num > maior){
      maior = num;
    }
  }

  printf("O maior número digitado foi: %d\n\n\n", maior);
  return 0;
}