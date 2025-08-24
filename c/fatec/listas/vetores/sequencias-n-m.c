//Dadas duas sequências n e m, onde n <= m, quantas vezes n aparece em m.

#include <stdio.h>

void leVet(int vet[], int n);
void printVet(int vet[], int n);
int qtd_sequencia(int vet1[], int vet2[], int n, int m);

int main(void){
  
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
  for(int i=0; i<g; i++){
    if(grande[i] == pequeno[0]){
      int aux = i;
      int cont= 0;// essa variavel deve ser igual a p

      if((aux+i) <= g){
        for(int j = 0; j<p; j++){
          if(grande[aux] == pequeno[j])
            cont++;
          else
            break;
        }
          if(cont == p)
            qtd++;
      } 
      else{
        return qtd;
      }
    }

  }
  
    
  return qtd;
}
