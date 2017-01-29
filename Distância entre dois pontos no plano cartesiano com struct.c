#include<stdio.h>
#include<math.h>//biblioteca para o calculo da raiz quadrada
#include<locale.h>//biblioteca para permitir o uso de caracteres com acentuação.

struct PontoCartesianoDistancia {
	double pontoAX, pontoAY, pontoBX, pontoBY;	
};



main(){
	struct PontoCartesianoDistancia armazenaPontos;
	//declarando a função para que o compilador entenda que esta função retorna DOUBLE, caso contrário, o compilador por padrão acharia que ela retornaria int.
	double calcularDistancia(double pontoAX, double pontoAY, double pontoBX, double pontoBY);
	//Está função habilita os acentos. 
	setlocale(LC_ALL,"");
	double x, y, z, w;
	
	printf("Escreva as coordenadas X e Y do ponto A\n");
	scanf("%lf %lf", &armazenaPontos.pontoAX, &armazenaPontos.pontoAY);
    printf("Escreva as coordenadas X e Y do ponto B\n");
    scanf("%lf %lf", &armazenaPontos.pontoBX, &armazenaPontos.pontoBY);
    
    x = armazenaPontos.pontoAX;
    y = armazenaPontos.pontoAY;
    z = armazenaPontos.pontoBX;
    w = armazenaPontos.pontoBY;
    
    
    printf("A distância é :%.2lf\nMuito Obrigado por usar um dos nossos softwares", calcularDistancia(x,y,z,w));
	return (0);
}

double calcularDistancia(double pontoAX, double pontoAY, double pontoBX, double pontoBY){
	double pontoPx = pontoBX;
	double PontoPy = pontoAY;
	
	double catetoHorizontal = pontoPx - pontoAX;
	double catetoVertical = pontoBY - pontoAY;
	
	double distancia = sqrt((catetoHorizontal*catetoHorizontal) + (catetoVertical*catetoVertical));
	
	return distancia;
}
