//Alocação Dinâmica
//Normalmente, váriaveis tem um valor prévio estabelecido para o programa
//Alocação Dinâmica refere-se a utilizar memória conforme haja necessidade
#include <stdlib.h>
#include <stdio.h>

int main(void){
  int *p, *q;//Ponteiro que armazenará um valor de maneira dinâmica 
  int entrada;

  printf("Digite um valor para ser o tamanho de um ponteiro: \n");
  scanf("%d", &entrada);
  
  // malloc => parâmetro único é a quantidade bytes a ser reservada
  // multiplicar os indices, pela quantidade de bytes do tipo de variável
  *p = malloc(100 * sizeof(int)); 

  for(int i = 0; i < 100; i++){
    p[i] *= p[i];
  }

  // calloc => parâmetro1 -> Quantidade de blocos de memória(Índices)
  // parâmetro2 -> Tamanho de Cada Bloco(Tipo_de_Dado)
}