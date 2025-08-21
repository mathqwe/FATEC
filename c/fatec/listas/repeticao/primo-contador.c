#include <stdio.h>

int main(void){
  int n;
  int div = 0;// contador || acumulador
  printf("Digite um número, veremos se ele é primo: ");
  scanf("%d", &n);

  int ac = 2;
  while(ac <= (n-1)){
    if(n % ac == 0)
      div++;
    ac++;
  }

  if(div == 0)
    printf("O número %d é primo, tirando o 1 e ele mesmo, possui %d divisores!\n\n\n", n, div);
  else
    printf("O número %d não é primo, tirando o 1 e ele mesmo, ainda tem %d divisores!\n\n\n", n, div);

  return 0;
}