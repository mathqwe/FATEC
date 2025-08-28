//Dadas duas sequências n e m, onde n <= m, quantas vezes n aparece em m.
#include <stdio.h>
#define G 20
#define P 4

void leVet(int vet[], int n);
void printVet(int vet[], int n);
int qtd_sequencia(int grande[], int pequeno[], int g, int p);

int main(void){
  int grande[G];
  int pequeno[P];

  printf("Digite a seguir %d números inteiros para uma lista grande, um por linha:  \n", G);
  leVet(grande, G);

  printf("Agora digite %d números inteiros para a lista menor, um por linha: \n", P);
  leVet(pequeno, P);

  printf("A lista pequena aparece %d vezes na lista grande\n\n\n", qtd_sequencia(grande, pequeno, G, P));
  return 0;
}

void leVet(int vet[], int n){
  for (int i=0; i<n; i++){
    scanf("%d", &vet[i]);
  }
}

void printVet(int vet[], int n){
  for(int i=0; i<n; i++){
    printf("vet[%d] = %d\n", i, vet[i]);
  }
} 

int qtd_sequencia(int grande[], int pequeno[], int g, int p){
  int qtd = 0;//quantidade de vezes que pequeno aparece em grande

  //caso g < p
  if(g < p){
    return qtd;
  }

  //Caso as listas possuam a mesma quantidade de elementos
  if(g == p){  
    for(int i=0; i<g; i++){
      if(grande[i] == pequeno[i])
        continue;
      else
        return qtd;
    }
    qtd = 1;
    return qtd;
  }

  //Caso as listas sejam diferentes, g > p
  for(int i=0; i<= (g-p); i++){
    if(grande[i] == pequeno[0]){
      int aux = i;
      int seq = 0;//deve ser igual a p

      for(int j=0; j<p; j++){
        if(grande[aux] == pequeno[j]){
          aux++;
          seq++;
        }
        else {
          break;
        }
      }
      
      if(seq == p)
        qtd++;
    }
  }
    
  return qtd;
}
