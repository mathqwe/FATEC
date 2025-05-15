//Criar uma funçãp, deve receber n, *p1, *p2. No endereço p1, retornar o maior número primo que é menor que n, p2 o menor número primo maior que n
#include <stdio.h>
#include <stdlib.h>

int primo (int n, int *a, int *b){
  //maior primo
  int nums[n];

  for(int i = 0; i < n; i++){
    nums[i] = i + 1;
  }

  for(int i = 0; i < n; i++){
    for(int j = 1; j < n; i++;){
      
    }
  }
}

int main(void){
  int n, a, b;

  printf("Digite o valor de n: ");
  scanf("%d", &b);

  primo(n, &a, &b);


  return 0;
}