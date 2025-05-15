#include <stdio.h>
#include <stdlib.h>

int main(void){
  int a, b;
  int mdc;
  int menor;

  printf("Digite um número: ");
  scanf("%d", &a);

  printf("Digite outro número: ");
  scanf("%d", &b);

  if(a < b) menor = a;
  if(b < a)
    menor = b;
  else
    menor = a;

  //calculando mdc
  if(b == 0){
    mdc = 0;
  }
  else {
    if(b > 0){
      for(int i = 1; i <= menor; i++){
        if( a % i == 0 && b % i == 0)
          mdc = i;
      } 
    }
      else{
        printf("As entradas não podem ser maior que 0\n\n\n");
        return -1;
      }
    }
  

  printf("O mdc(%d, %d) = %d\n\n", a, b, mdc);

  return 0;
}