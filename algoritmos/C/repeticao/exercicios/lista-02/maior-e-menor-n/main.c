// O programa deve receber uma entrada n, e então imprimir o menor primo >= n, e o maior primo que é <= n
#include <stdio.h>
#include <stdlib.h>

int main(void){
  int n;
  
  printf("Digite o valor de n: ");
  while(scanf("%d", &n) != 1 && n < 1){
    printf("Valor inválido, digite um número inteiro maior que 0: \n");
  }

  //alterando os valores dos indices para 1 = primo, 0 = não primo
  int numeros[n];
  for(int i = 1; i <= n; i++){
    int n_primos = 0;

    for(int j = 1; j <= i; j++){
     if(i % j == 0){
      n_primos++;
    }
   } 
    if(n_primos == 2) 
      numeros[i-1] = 1;
    else
      numeros[i-1] = 0;
  }

  //econtrando o menor e o maior primo
  int maior_p = , menor_p;
  for

  for(int i = 0; i < n; i++){
    printf("%d\n", numeros[i]);
  }

  return 0;
}