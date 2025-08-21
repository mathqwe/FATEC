#include <stdio.h>

int main(void){
  int n;
  int esta_ordenada = 1;
  
  printf("Digite quantos números tem a sequência: ");
  scanf("%d", &n);
  printf("Agora digite %d números, um por linha: \n", n);

  int num;
  int num_anterior;

  scanf("%d", &num_anterior);

  for(int i = 2; i <= n; i++){    
    scanf("%d", &num);
    if(num_anterior > num)
      esta_ordenada = 0;
    num_anterior = num;
  }

  if(esta_ordenada)
    printf("A lista está ordenada!\n\n\n");
  else
    printf("A lista não está ordenada!\n\n\n");

  return 0;
}