#include <stdio.h>
#include <string.h>
#define MAX 4

typedef struct Aluno{
  char nome[80];
  float nota;
} Aluno;
 
Aluno leAluno(){
  Aluno aux;
  printf("Digite o nome do aluno: ");
  fgets(aux.nome, 80, stdin);
  aux.nome[strlen(aux.nome) -1] = '\0'; //remove o \n e adiciona o \0 => o que simboliza o fim da string
  printf("Digite a nota do %s: ", aux.nome);
  scanf("%f", &aux.nota); getchar();

  return aux;
}

void imprimeAluno(Aluno a){
  printf("nome: %s\n", a.nome);
  printf("Nota: %f\n", a.nota);
}

void listarTurma(Aluno turma[], int n){
  for(int i=0; i<n; i++){
    printf("%s -> %f\n", turma[i].nome, turma[i].nota);
  }
}

int main(void){ 
  Aluno turma[MAX];
  for(int i=0; i<MAX; i++){
    turma[i] = leAluno();
  }
  listarTurma(turma, MAX);
  
  return 0;
}