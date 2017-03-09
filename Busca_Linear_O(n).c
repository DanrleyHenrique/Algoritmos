#include "stdio.h"
#include<stdlib.h>

int geradorAleatorio()
{
	//Essa função é capaz de gerar um número aleatório
	int x;
	x = rand() %  21;
	if((rand() % 3) == 1)
		return x*(-1);
	else
		return x;	
}

int main(void) {
  srand((unsigned) time(NULL));
  int expoente, i, tamanho;
  tamanho = 1;
  expoente = 4;
  
  for(i=0; i < expoente ; i++){
    tamanho = tamanho * 2;
    
    
  }
  int Vetor[tamanho];
  
  for(i = 0 ; i < tamanho ; i++){
    Vetor[i] = geradorAleatorio();
    printf(" %d ", Vetor[i]);
    
  }
  
  for(i = 0 ; i < tamanho ; i++){
    if(Vetor[i] == Vetor[tamanho-1] && i == tamanho-1){
      printf("\nNumero %d encontrado no indice %d", Vetor[i], i);
    }
    
  }
  
  return 0;
}
