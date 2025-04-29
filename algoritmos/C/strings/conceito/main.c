//C não possuí strings por padrão, entretanto, strings em c são um vetor de char
//C tem como característica que uma string é sempre terminada em \0
//Sempre declare uma string com um índice a mais para o \0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char stOla[4];
  stOla[0] = 'O';
  stOla[1] = 'l';
  stOla[2] = 'a';
  stOla[3] = '\0';//Sempre declarar o Final da string

  printf("%s\n", stOla);//%s indíca que se trata de uma stirng(Vetor de char)

  //Utilizando o scanf com strings
  char mensagem[101];
  printf("Digite uma mensagem de no máximo 100 caracteres\n");
  scanf("%s", mensagem);//Scanf coloca automaticamento o \0 no fim da string

  printf("%s\n", mensagem);//Identifca \n => (enter) como quebra da string
  printf("%s\n", stOla);

  while(getchar() != '\n');//Limpa o Buffer de entrada

  //Utilizando o fgets => Permite Ler espaços em strings
  //Sintaxe => fgets(nomeVariavel, limite(numero de indices da string -1(\0), stdin)
  printf("Digite uma mensagem, agora consigo ler espaços: \n");
  fgets(mensagem, 101, stdin);

  printf("%s\n", mensagem);

  for(int i = 0;i < 101; i++){
    if(mensagem[i] == '\0') 
      break;
    else
      printf("%c\n", mensagem[i]);
  }


  //Atribuindo Constantes para strings
  char constante[101] = "Sim, isso é possível!";
  printf("%s\n", constante);

  //tamanho da string strlen(string);
  int tamanho = strlen(constante);
  printf("Deve ser 21, na verdade é == %d\n", tamanho);
  return 0;
}