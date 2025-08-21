/*
Faça um programa que imprima um menu de 4 pratos na tela e uma quinta opção para sair
do programa. O programa deve imprimir o prato solicitado. O programa deve terminar
quando for escolhido a quinta opção.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
  int opc;

do{
  printf("-------------------MENU-------------------\n");
  printf("1 -> PIZZA\n");
  printf("2 -> HOTDOG\n");
  printf("3 -> SALADA\n");
  printf("4 -> SUSHI\n");
  printf("5 -> SAIR\n");
  printf("Escolha as opções de 1 a 4, ou digite 5 para sair: ");
  if(scanf("%d", &opc) != 1){
    opc = -1;
    while(getchar() != '\n');
  }

  switch(opc){
    case 1:
      printf("você escolheu PIZZA!\n\n\n");
      break;
    case 2:
      printf("você escolheu HOTDOG\n\n\n");
      break;
    case 3:
      printf("você escolheu SALADA\n\n\n");
      break;
    case 4:
      printf("Você escolheu SHUSHI!\n\n\n");
      break;
    case 5:
      printf("você escolheu SAIR!\nADEUS!\n\n\n");
      break;
    case -1:
      printf("Opção inválida!\nDigite novamente!\n\n");
      break;
    default:
      system("clear");
      break;
  }
} while(opc != 5);

  return 0;
}