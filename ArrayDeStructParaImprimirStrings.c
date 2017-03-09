#include<stdio.h>



main(){
	
	typedef struct name{
    char name[100]; // 100 character array
    }name;
    
	double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo;
	int i;
	scanf("%lf%lf%lf", &A, &B, &C);
	triangulo = (A * C)/2;
	circulo =  3.14159 * (C*C);
	trapezio = ((A+B)*C)/2;
	quadrado = B*B;
	retangulo = A * B;
	double results[5] = {triangulo, circulo, trapezio, quadrado, retangulo};
	name array[5] = {"TRIANGULO: ", "CIRCULO: ", "TRAPEZIO: ", "QUADRADO: ", "RETANGULO: "};
	for(i = 0 ; i <= 4 ; i++){
		printf("%s", array[i]);
		printf("%.3lf\n", results[i]);
	}
	printf("\n");
	return(0);
}
