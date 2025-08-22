#include <stdio.h>
#define MAX 5

typedef struct Aluno {
  int Ra;
  int idade;
}Aluno;

void readAlunos(int n, Aluno alunos[]){ 
  printf("A seguir, digite em cada campo o Ra e idade de 5 alunos, um por linha: \n");
  for(int i=0; i < n; i++){
    printf("Ra do aluno %d: ", (i+1));
    scanf("%d", &alunos[i].Ra);
    printf("Idade do alunos %d: ", (i+1));
    scanf("%d", &alunos[i].idade);
  }
}

void printAlunos(int n, Aluno alunos[]){
  for(int i=0; i<n; i++){
    printf("Aluno %d\n\tRa:%d\n\tidade:%d\n\n",(i+1), alunos[i].Ra, alunos[i].idade);
  }
}

int main(void){
  struct Aluno alunos[5];

  readAlunos(MAX, alunos);
  printAlunos(MAX, alunos);

  return 0;
}
