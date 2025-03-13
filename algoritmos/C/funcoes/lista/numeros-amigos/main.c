/*
  Esse programa recebe dois números a e b, e verfica se eles são números amigos.
*/
#include <stdio.h>
#include <stdlib.h>

int numerosAmigos (int a, int b);
int leitorNumeros();

int main (void) {
  int x, y;

  printf("Esse programa recebe dois números e verifica se eles são amigos\n");
  printf("Números amigos possuem o somatório de seus divisores próprios iguais\n");

  printf("Digite um número inteiro positivo: ");
  x = leitorNumeros();

  printf("Agora digite outro número inteiro positivo: ");
  y = leitorNumeros();

  //teste função números amigos
  if(numerosAmigos(x, y) == 1) {
    printf("Os números %d e %d são amigos! Cada número possuí o mesmo valor que a quantidade de divisores próprios do outro!\n", x, y);
    printf("Número %d == (soma dos divisores próprios de %d) => %d\n", x, y, x);
    printf("Número %d == (soma dos divisores próprios de %d) => %d\n\n\n", y, x, y);
  } 
  else {
    printf("Os números %d e %d não são amigos D:. Eles não possuem o mesmo somatório de divisores próprios um do outro.\n\n\n", x, y);
  }

  return 0;
}

int numerosAmigos (int a, int b) {
  int diva = 0, divb = 0;

  if(a == b || a == 0 || b == 0) {
    return 0;
  }

  for (int i = 1; i <= (a - 1); i++) {
    if(a % i == 0) {
      diva += i;
    }
  }

  for (int i = 1; i<= (b - 1); i++) {
    if(b % i == 0) {
      divb += i; 
    }
  }

  if(diva == b && divb == a)
    return 1;
  else 
    return 0;
}

int leitorNumeros () {
  int x;
  while(scanf("%d", &x) != 1 || x < 0) {
    printf("Número inválido, digite novamente: ");
    while(getchar() != '\n');
  }
  return x;
}