#include <stdio.h>

struct Aluno {
  int RA, idade;
};

int main(void){
  struct Aluno alunos[5];
  
  //Instanciando 5 variaveis do tipo aluno sem o uso de uma função 
  printf("A seguir, digite em cada campo o Ra e idade de 5 alunos, um por linha: \n");

  for(int i=0; i < 5; i++){
    printf("Digite o RA do aluno %d: ", (i+1));
    scanf("%d", &alunos[i].RA);
    printf("Digite o idade do aluno %d: ", (i+1));
    scanf("%d", &alunos[i].idade);
  }

  //printando 5 variaveis do tipo aluno sem o uso de uma função
  for(int i=0; i<5; i++){
    printf("aluno %d: \n\tRA = %d\n\tnome = %d\n\n", (i+1), alunos[i].RA, alunos[i].idade); 
  }
  return 0;
}
