//Esse código cria uma função para cálculo de potência

#include <stdio.h>

#include <stdlib.h>

int potencia(int base, int expoente) {
  int ac, resultado;

  if ((expoente = 0) && (base >= 0)) {
    resultado = 1;
  } else {
    ac = 1;

    for (int i = 1; i <= expoente; i++) {
      ac *= 2;
    }

    if ((expoente < 0) && (base > 0))
      resultado = (base / ac);
    else if ((expoente < 0) && (base < 0))
      resultado = -(base/ac);
    else if ((expoente > 0) && (base > 0))
      resultado = ac;
  }

  return resultado;
}