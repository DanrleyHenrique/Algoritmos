#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//A função adicionarnofinal atende a complexidade O(1);
//A função removerdoinicio atende a complexidade O(n);

typedef struct No no;

int geradorAleatorio(){
	//Aqui são gerados todos os números aleatórios
	int x;
	x = rand() %  2147483647;
	if((rand() % 3) == 1)
		return x*(-1);
	else
		return x;	
}

int menu(){
	int x;
	printf("\n1: Inserir no final\n");
	printf("2: Remover do inicio\n");
	printf("3: Ver a fila\n");
	printf("0: Encerrar o programa\n");
	scanf("%d", &x);
	return x;
}

struct No{
	int numero;
	struct No *proximo;
	struct No *anterior;
};


void iniciar(no *partida){
	partida->proximo = NULL;
}

no* adicionarnofinal(no *partida, int x){
//	printf("Digite novo elemento\n");
	no *novo = (no*)malloc(sizeof(no));
	novo->numero = x;
	novo->proximo = NULL;
	novo->anterior = partida;
	partida->proximo = novo;
	return novo;

}


void exibirfila(no *partida){

	if(partida->proximo == NULL){
		printf("\txxxxxxxxxxxxxxx\n");
		printf("\tx Pilha vazia x\n");
		printf("\txxxxxxxxxxxxxxx\n");

	}else{
		printf("\tInício da fila-> ");
		while(partida->proximo != NULL){
			partida = partida->proximo;
			printf("%d ", partida->numero);
		}
		printf("<-Final da fila");
	}

}


no *removerdoinicio(no *auxiliar, no *partida){
		//Auxiliar éo final da fila
		
		if(partida->proximo == NULL){
		printf("\txxxxxxxxxxxxxxx\n");
		printf("\tx Pilha vazia x\n");
		printf("\txxxxxxxxxxxxxxx\n");
		}else{
		no *comeco = (no*)malloc(sizeof(no));
		no *pulo = (no*)malloc(sizeof(no));
		pulo = auxiliar->anterior;
		
		while(pulo->anterior != NULL){
			pulo = pulo->anterior;
		}
		
		comeco = pulo;
		pulo = pulo->proximo;
		printf("Desalocado %d", pulo->numero);
		pulo = pulo->proximo;
		comeco->proximo = pulo;
	}
	
}

int main(){

	int x; setlocale(LC_ALL,""); srand((unsigned) time(NULL));
	x = 1;
	no *partida = (no*) malloc(sizeof(no));//Ponteiro que vai servir de base para as
	iniciar(partida);//outras structs

	no *auxiliar = (no*)malloc(sizeof(no));//Ponteiro que vai sempre receber o final da fila
	auxiliar = partida;

	/////////////////;
	//Aqui são gerados todos os números aleatórios 

	printf("A entrada será de dois elevado a quanto?\n2^?\n? = ");
	int l, z, w;
	scanf("%d", &x);
	z = 1;
	for(l = 0; l < x; l++){
		z = z * 2;
	}

	for(l = 0; l < z; l++){
		if(l<z-1){
	x = geradorAleatorio();
	auxiliar = adicionarnofinal(auxiliar, x);
	printf("%d ", x);
	}else{
		//z = qtd de itens na fila
		//verei se posso medir o tempo por aqui
		x = geradorAleatorio();
		auxiliar = adicionarnofinal(auxiliar, x);
		printf("%d ", x);
	}
	}
	///Fim dos números aleatórios
	///////////////////////////
	while(x != 0){
		
	x = menu();
		switch(x){
			case 1:
				//restaurar essa parte
				//auxiliar = adicionarnofinal(auxiliar);
				break;

			case 2:
				removerdoinicio(auxiliar, partida);
				break;

			case 3: 
				exibirfila(partida);
				break;
			case 4:
				break;
		}

	}
	return 0;
}
