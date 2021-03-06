#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

//Este algoritmo atende a complexidade O(n^2)


int geradorAleatorio(){
	//Essa função é capaz de gerar um número aleatório
	short int x;
	x = rand() %  30;
	if((rand() % 3) == 1)
		return x*(-1);
	else
		return x;	
}



int main(){
  
  double tempoInicial, tempoFinal;
	double tempoGasto;
	
	
	int i, j, expoente, me, n, troca, *pVetor; 
	setlocale(LC_ALL,""); srand((unsigned) time(NULL));
	
	//printf("A entrada será de dois elevado a quanto?\n2^?\n? = ");
	//scanf("%d", &expoente);
	
	////////////// For para gerar a exponenciação
	j = 1;
	expoente = 10;
	for(i = 0; i < expoente; i++){
		j = j * 2;
	}
	
	int Vetor[j];
	////////////// For para semear o Array
	
	for(i = 0; i < j; i++){
		Vetor[i] = geradorAleatorio();
		printf("%d ", Vetor[i]);	
	}
	
	
	n = j;///Aqui n recebe o tamanho do vetor que é a exponenciação deixando j para o For interno
	printf("<-Desordenado/Ordenado->");
	
	
	tempoInicial = clock();
	
	for(i = 0; i < n-1; i++){
		me = i;
		
		for(j = i+1; j < n; j++){
			if(Vetor[j] < Vetor[me])
				me = j;
		}
		if(i != me){
			troca = Vetor[i];
			Vetor[i] = Vetor[me];
			Vetor[me] = troca;
		}
	}
	
	tempoFinal = clock();
	
	i = 0;
	for(i = 0; i < n; i++) {
		printf(" %d", Vetor[i]);
	}
	
	
	tempoGasto = (tempoFinal - tempoInicial) * 1000 / CLOCKS_PER_SEC;
	printf("\nTempo em milisegundos: %0.1fms", tempoGasto);
	
	return 0;
}
