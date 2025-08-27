#include <stdio.h>
#define N 5

typedef struct Aluno {
  int ra;
  int idade;
} Aluno;

Aluno leAluno(){
  Aluno aux;
  printf("Digite o ra do aluno: ");
  scanf("%d", &aux.ra); getchar();
  printf("Agora digite a idade do aluno: ");
  scanf("%d", &aux.idade); getchar();
  return aux;
}

float mediaAlunos(Aluno turma[], int n){
  float media = 0.0;

  for(int i=0; i<n; i++){
    media += turma[i].idade;
  }
  media /= (float)n; //converte n para float
  return media;
}

int main(void){
  Aluno turma[N];
  for(int i=0; i<N; i++){
    turma[i] = leAluno();
  }

  float media = mediaAlunos(turma, N);
  printf("A média de idade dos alunos é = %f\n\n", media);

  return 0;
}