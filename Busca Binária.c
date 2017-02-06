#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int geradorAleatorio()
{
	//Essa função é capaz de gerar um número aleatório
	int x;
	x = rand() %  200;
	if((rand() % 3) == 1)
		return x*(-1);
	else
		return x;	
}

int PesquisaBinaria ( int vet[], int chave, int Tam)
{
     int inf = 0;     //Limite inferior  (o primeiro elemento do vetor em C é zero          )
     int sup = Tam-1; //Limite superior  (termina em um número a menos 0 a 9 são 10 numeros )
     int meio;
     while (inf <= sup)
     {
          meio = (inf + sup)/2;
          if (chave == vet[meio])
               return meio;
          if (chave < vet[meio])
               sup = meio-1;
          else
               inf = meio+1;
     }
     return -1;   // não encontrado
}

int main(){
  int chave, Tam, j, expoente, i;
  chave = 45;
  Tam = 10;
  
  ////////////// For para gerar a exponenciação
	j = 1;
	
	expoente = 3;
	
	for(i = 0; i < expoente; i++){
		j = j * 2;
	}
	
	////////////// For para semear o Array
	int Vetor[j];
	i = rand() % j;
	chave = Vetor(i);
	
	for(i = 0; i < j; i++){
		Vetor[i] = geradorAleatorio();
		printf("%d ", Vetor[i]);	
	}
  
  printf(" O elemento %d está no indice %d", chave, PesquisaBinaria(Vetor, chave, Tam));
  return 0;
  
  
}
