#include <stdio.h>
#include <string.h>

//declarando uma struct

struct Aluno {
  char nome[100];
  int Ra;
  int idade;

};

int main(void){
  struct Aluno a;

  printf("Digite o nome do aluno: ");
  fgets(a.nome, sizeof(a.nome), stdin);
  
  printf("Agora digite o número do RA: ");
  scanf("%d", &a.Ra);

  printf("Agora digite a idade do aluno: ");
  scanf("%d", &a.idade);
  
  printf("\n\nnome: %s\n", a.nome);
  printf("RA: %d\n", a.Ra);
    printf("idade: %d\n", a.idade);

  return 0;
} 
