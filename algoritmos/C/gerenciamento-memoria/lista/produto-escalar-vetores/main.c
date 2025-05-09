#include <stdio.h>
#include <stdlib.h>

void printP(int *p, int n){
  for(int i = 0; i < n; i++){
    printf("%d\n", p[i]);
  }
}

void readP(int *p, int n){
  for(int i = 0; i < n; i++){
    while(scanf("%d", &p[i]) != 1){
      printf("valor Inválido, digite novamente: \n");
      while(getchar() != '\n');
    }
  }
}

  void produtoEscalar(int *p, int *q, int *pq, int n){
    for(int i = 0; i < n; i++){
      pq[i] = p[i] * q[i];
    }
}


int main(void){
  int *p, *q, *pq;
  int n;

  printf("Esse programa realizar o um produto escalar entre dois vetores\n\n ");
  printf("Digite Um valor para se o tamanho dos vetores: \n");
  scanf("%d", &n);

  p  = calloc(n, sizeof(int));
  q  = calloc(n, sizeof(int));
  pq = calloc(n, sizeof(int));

  printf("Agora, digite %d valores um após o outro para o vetor p: \n", n);
  readP(p, n);
  printf("Agora, digite %d valores um após o outro para o vetor q: \n", n);
  readP(q, n);

  produtoEscalar(p, q, pq, n);

  printf("Vetor p: \n");
  printP(p, n);
  printf("Vetor q: \n");
  printP(q, n);

  printf("\nProduto Escalar\n");
  printP(pq, n);

  free(p);
  free(q);
  free(pq);

  return 0;
}