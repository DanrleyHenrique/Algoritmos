#include<stdio.h>

int divide(int a, int b){
	if (a == b) {
	return 1;
	} else {
		if (a < b) return 0;
		else return divide(a-b, b) + 1;
	}	
}

int main(void){
	int divisor = 0;
	int dividendo = 0;
	int resultado = 0;
	
	puts("Entro com o dividendo");
	scanf("%d", &dividendo);
	puts("Entre com o divisor");
	scanf("%d", &divisor);
	
	printf("%d dividido por %d = %d", dividendo, divisor, divide(dividendo, divisor));
	return (0);
}
