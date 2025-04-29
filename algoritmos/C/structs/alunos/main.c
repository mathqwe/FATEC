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

		while(scanf("%d", &z[i].RA) != 1){
			printf("RA, digite novamente!\n");
			while(getchar() != '\n');
		}

		printf("Digite a Idade: ");

		while(scanf("%d", &z[i].idade) != 1) {
			printf("Idade inválida, digite novamente: ");
			while(getchar() != '\n');
		} 
	}
}

void listagemAlunos (Aluno z[], int tam) {
	for (int i = 0; i < tam; i++) {
		printf("Indice[%d] RA = %d | Idade = %d\n", i, z[i].RA, z[i].idade);
	}
}

float mediaIdades (Aluno z[], int tam) {
	float media = 0;

	for(int i = 0; i < tam; i++) {
		media += z[i].idade;//acumuladora
	}

	media /= tam;// media = media / tam;
	return media;
}

int main (void) {
	Aluno listaAlunos [5];	
	
	printf("Digite a seguir a informação de 5 alunos: \n\n");
	lerAlunos(listaAlunos, 5);
	
	//testes
	printf("\nLista inserida de alunos: \n");
	listagemAlunos(listaAlunos, 5);

	printf("\nmedia de idade dos alunos: \n");
	printf("Media = %.1f\n\n\n", mediaIdades(listaAlunos, 5));
	return 0;
}
