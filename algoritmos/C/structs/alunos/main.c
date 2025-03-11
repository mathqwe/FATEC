/*
	Esse programa utiliza um tipo de registro para armazenar RA e idade de alunos
	- Deve utilizar uma função para ler 5 alunos em uma função
	- Deve calcular e imprimir a média das idades dos alunos
 */

#include <stdio.h>
#include <stdlib.h>

//typedef struct NomeDaStruct NomeDoNovoTipo; => permite chamar aluno sem declarar que se trata de uma struct, chamando diretamente pelo nome 
typedef struct Aluno {
	int RA;
	int idade;
}Aluno;

void lerAlunos (Aluno z[], int tam) {
	for (int i = 0; i < tam; i++) {
		printf("Digite o RA: ");
		scanf("%d", &z[i].RA);

		printf("Digite a Idade: ");
		scanf("%d", &z[i].idade);
	}
}

int main (void) {
	Aluno listaAlunos [5];	
	
	printf("Digite a seguir a informação de 5 alunos: ");

	lerAlunos(listaAlunos, 5);
	return 0;
}
