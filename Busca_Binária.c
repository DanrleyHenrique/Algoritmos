#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
 


int geradorAleatorio()
{
	//Essa função é capaz de gerar um número aleatório
	int x;
	x = rand() %  4;
	if((rand() % 3) == 1)
		return x*(-1);
	else
		return x;	
}


int main(){
  double tempoInicial, tempoFinal, tempoGasto;
  setlocale(LC_ALL,""); srand((unsigned) time(NULL));
  int j, i; short int expoente;
  j = 1; expoente = 1;
	
	for(i = 0; i < expoente; i++){
		j = j * 2;
}  
  

int v[j-1];
int x,inicio,meio , fim ;
int num; //número a ser buscado.

for(x=0;x<j;x++)
{ 
  v[x] = geradorAleatorio();
  printf(" %d ", v[x]);
}
num = v[j-1];
inicio=0;
fim = sizeof(v);
fim = fim/4;
 
 
tempoInicial = clock(); 
if(v[inicio]==num){
printf("\n numero %d encontrado no indice %d\n",num, inicio);
}
else if(v[fim]==num){
printf("\n numero %d encontrado no indice %d\n", num, fim);
}
else{
  while(inicio<fim){ 
    meio=(inicio+fim)/2; //aqui no caso estou fazendo um typecasting, irei truncar o valor do quociente para pegar somente a parte inteira.
  
    if ( v[meio]==num){ 
    printf("\n numero %d encontrado no indice %d\n", num, meio);break;
    }else 
      if(num>v[meio]){ 
       inicio=meio+1;
      }else{ 
        fim=meio;
     }
   }
  }
  tempoFinal = clock();
  tempoGasto = (tempoFinal - tempoInicial) * 1000 / CLOCKS_PER_SEC;
	printf("\nTempo em milisegundos: %0.11fms", tempoGasto);
return 0;
}
