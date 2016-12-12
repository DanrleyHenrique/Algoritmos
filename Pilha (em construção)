#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct No{
	int numero;
	struct No *proximo;
};
typedef struct No no;
int tamanho;
static char aux[100]; 
static char aux2[100]; 

int menu(){
	int x;
	printf("\n\txxxxxxxxxxxxxx");
	printf("\t\n\tx 1 Empilhar\n\tx 2 Desempilhar\n\tx 3 Mostrar\n\tx 4 Ver tamanho\n\tx 5 Salvar em arquivo\n\tx 0 Encerrar\n\n\n\n\n\n\n\t");
	scanf("%d", &x);
	
	return x;
}

void inicia(no *PILHA){
	PILHA->proximo = NULL;
	tamanho = 0;	
}

void empilhar(no *PILHA){
	no *novo = (no*) malloc(sizeof(no));
	if(novo == NULL)
	{
		printf("SEM MEMORIA DISPONIVEL");
		exit(0);
	}
	
	else
	{
		printf("Digite o número inteiro\n");
		scanf("%d", &novo->numero);
		novo->proximo = NULL;
		
		if(PILHA->proximo == NULL)
		{
			PILHA->proximo = novo;
			tamanho++;
		}
		else
		{
			no *tmp = PILHA->proximo;
			while(tmp->proximo != NULL)
				tmp = tmp->proximo;
				
			tmp->proximo = novo;
			tamanho++;
		}
	}
}

void desempilhar(no *PILHA){
	if(PILHA->proximo == NULL)
	{
		printf("Pilha vazia");
	}
	else
	{
		no *ultimo = PILHA->proximo;
		no *penultimo = PILHA;
		while(ultimo->proximo != NULL)
		{
			penultimo = ultimo;
			ultimo = ultimo->proximo;
		}
		if(ultimo->proximo == NULL)
		{
			penultimo->proximo = NULL;
		}
		tamanho--;
		
	}
}

int exibir(no *PILHA){
	if(PILHA->proximo == NULL){
		printf("Pilha Vazia");
	}
	else
	{
		
	no *tmp = PILHA->proximo;
	if(tmp->proximo == NULL)
	{
		printf("->  %d", tmp->numero);
		
	}
	
	while(tmp->proximo != NULL){
		printf("->  %d  ", tmp->numero);
		tmp	= tmp->proximo;	
		if(tmp->proximo == NULL)
			printf("->  %d", tmp->numero);
		}
	}
	
}

char* percorrePilha(no *PILHA){
	

	if(PILHA->proximo == NULL){
		printf ("Pilha Vazia");
	}
	else
	{
		
	no *tmp = PILHA->proximo;
	if(tmp->proximo == NULL)
	{
		sprintf(aux, "%s%d", "->  ", tmp->numero);
	}
	
	while(tmp->proximo != NULL)
	{
		sprintf(aux, "%s%d", " -> ", tmp->numero);
		//strcat(aux, aux2);
		tmp	= tmp->proximo;	
		strcat(aux2, aux);
		if(tmp->proximo == NULL)
		{
			sprintf(aux, "%s%d", " -> ", tmp->numero);
			strcat(aux2, aux);
		}
	}
	

	}
}

int getTamanho(){
	return tamanho;
}

void salvarPilhaEmArquivo(char nomeArquivo[]){
	FILE *ponteiro;
	strcat(nomeArquivo, ".txt");
	ponteiro = fopen(nomeArquivo, "w");
	fprintf(ponteiro, aux2);
}

            //MAIN
int main(void){
	setlocale(LC_ALL,"");
	tamanho = 0;
	int opcao;
	opcao = -1;
	
	no *ponteiro = (no*) malloc(sizeof(no));
	if(ponteiro == NULL)
	{
		printf("SEM MEMÓRIA DISPONÍVEL");
		return 0;
	}
	inicia(ponteiro);
	
	while(opcao != 0)
	{
		opcao = menu();
		switch(opcao){
		case 1:
			empilhar(ponteiro);
			break;
			
		case 2:
			desempilhar(ponteiro);
			break;
			
		case 3:
			exibir(ponteiro);
			break;
			
		case 4:
			printf("Tamanho da pilha: %d unidade(s)", getTamanho());
			break;
			
		case 5:
			percorrePilha(ponteiro);
			printf("Por favor, escreva um nome para o arquivo\n");
			char nomeArquivo[30];
			scanf("%s", &nomeArquivo);
			salvarPilhaEmArquivo(nomeArquivo);
			break;
			
		}
		
	
	}
	return 0;
}
