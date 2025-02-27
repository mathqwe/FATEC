// Esse programa deve imprimir o menu de 4 pratos na tela, e uma 5ª opção para sair do programa
// O programa termina somente quando a 5ª opção é escolhida

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  unsigned int opcao;

  do {
    opcao = -1;

    printf("PIZZA = 1\t\tHOTDOG = 2\t\tFILÉ DE PEIXE = 3\t\tMACARRONADA = 4\t\tSAIR = 0\n");
    printf("Digite uma opção válida: \n");

    if ((scanf("%u", & opcao) != 1) || (opcao < 0) || (opcao > 4)) {
      printf("Entrada inválida!\n");
      while (getchar() != '\n');;//Limpa o buffer de entrada
      system("clear");
      continue;

    } else {
      switch (opcao) {
      case 1:
        printf("Aqui está sua PIZZA!\n");
        break;
      case 2:
        printf("Aqui está seu HOTDOG!\n");
        break;
      case 3:
        printf("Aqui estã seu FILÉ DE PEIXE!\n");
        break;
      case 4:
        printf("Aqui está sua MACARRONADA!\n");
        break;
      case 0:
        printf("Encerrando...\n");
        break;
      default:
        printf("Erro desconhecido!");
        break;
      }
    }

  } while (opcao != 0);

  return 0;
}