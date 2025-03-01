// Esse programa deve ler uma potência. A variável a será a base, e b será o
// expoente. O programa de imprimir o valor de a ^ b;

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b;
  int controller = 0;  // Bool
  float p;

  do {
    printf(
        "Digite um número inteiro, esse será o valor da Base da potência: \n");

    while (scanf("%d", &a) != 1) {
      printf("Valor da base Inválido!, digite a base novamente: \n");

      while (getchar() != '\n');
    }

    printf("Agora digite um número inteiro para o expoente: \n");

    while (scanf("%d", &b) != 1) {
      printf("Valor do exponete inválido, Digite novamente: \n");

      while (getchar() != '\n');
    }

    controller = 1;

  } while (controller == 0);

  // Expoente == 0
  if (b == 0) {
    printf("%d ^ %d = %d\n\n\n", a, b, 1);
    return 0;
  }
  // Base == 0
  else if (a == 0) {
    printf("%d ^ %d = %d\n\n\n", a, b, 0);
    return 0;
  }
  // Expoente && Base > 0
  else if (a > 0 && b > 0) {
    p = 1;

    for (int i = 1; i <= b; i++) {
      p *= a;
    }
    printf("%d ^ %d = %f\n\n\n", a, b, p);
  }
  // Expoente < 0
  else if (b < 0) {
    b = -b;
    p = 1;

    for (int i = 1; i <= b; i++) {
      p *= a;
    }

    p = 1 / p;

    printf("%d ^ %d = %f\n\n\n", a, b, p);
    return 0;
  } else {
    printf("Erro Desconhecido!");
    return 1;
  }

  return 0;
}