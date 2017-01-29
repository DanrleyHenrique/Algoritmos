#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int geradorAleatorio(){
	//Essa função é capaz de gerar um número aleatório
	int x;
	x = rand() %  2147483647;
	if((rand() % 3) == 1)
		return x*(-1);
	else
		return x;	
}

int *geradordenumeros(int expoente){
	//Aqui são gerados todos os números aleatórios
	
	int contador, z;
	z = 1;
	for(contador = 0; contador < expoente; contador++){
		z = z * 2;
	}
	
	
	int array[z];
	
	
	for(contador = 0; contador < z; contador++){
		array[contador] = geradorAleatorio();
		printf("%d ", array[contador]);	
	}
}


int main(){
	setlocale(LC_ALL,"");//Permite o uso de acentos
	srand((unsigned) time(NULL));//Permite que os números do random sejam aleatórios
	int expoente;
	
	printf("A entrada será de dois elevado a quanto?\n2^?\n? = ");
	scanf("%d", &expoente);
	geradordenumeros(expoente);
	
	
	return 0;
}
