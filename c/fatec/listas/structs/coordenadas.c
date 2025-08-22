#include <stdio.h>

typedef struct Ponto {
  float x;
  float y;
}Ponto;

void imprimePonto(Ponto p){
  printf("ponto eixo x: %f\n", p.x);
  printf("Ponto eixo y: %f\n", p.y);
}

Ponto somaDePontos(Ponto p, Ponto q){
 Ponto res;

 res.x = p.x + q.x;
 res.y = p.y + q.y;

 return res;
} 

Ponto subDePontos(Ponto p, Ponto q){
 Ponto res;

 res.x = p.x - q.x;
 res.y = p.y - q.y;

 return res;
} 


Ponto multiDePontos(Ponto p, Ponto q){
 Ponto res;

 res.x = p.x * q.x;
 res.y = p.y * q.y;

 return res;
} 

Ponto divDePontos(Ponto p, Ponto q){
 Ponto res;

 if(p.y == 0 || q.y == 0)
  return -1;c

 res.x = p.x / q.x;
 res.y = p.y / q.y;

 return res;
} 
int main(void){
  Ponto p1;
  Ponto p2;
  Ponto p3;

  p1.x = 10;
  p1.y = 12;

  p2.x = 18;
  p2.y = 22;

  p3 = somaDePontos(p1, p2);

  imprimePonto(p1);
  imprimePonto(p2);
  imprimePonto(p3);

  


  return 0;
}
