#include <stdio.h>

int main(void){
  int e_primo = 1;
  int n;

  printf("Digite um número inteiro: ");
  scanf("%d", &n);

  for(int i = 2; i < n; i++){
    if(n % i == 0){
      e_primo = 0;
      break;
    }
  }
  
  if(e_primo)
    printf("O número %d é um número Primo!\n\n\n");
  else
    printf("O número %d não é um número Primo!\n\n\n");


  return 0;
}