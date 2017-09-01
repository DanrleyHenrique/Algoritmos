#include "stdio.h"
int main(void) {
  fracoes();
  int x, y, z, w, resultado;
  
  printf("INSIRA ZERO ONDE VOCE QUISER DESCOBRIR O VALOR\nDigite x");
  scanf("%d", &x);
  printf("Digite y");
  scanf("%d", &y);
  printf("Digite z");
  scanf("%d", &z);
  printf("Digite w");
  scanf("%d", &w);
  resultado = calculaRegraDeTres(x, y, z, w);
  printf("\nResultado:\n %d centimetros\n", resultado);
  printf("%d metros\n", resultado/100);
  printf("%d kilometros\n", resultado/100000);
  return 0;
}

void fracoes()
{
  printf("centimetro no mapa   centimetros no tamanho real\n");
  printf("        x                            y\n");
  printf("       ---                          ---\n");
  printf("        z                            w\n");
}

int calculaRegraDeTres(int x, int y, int z, int w)
{
  int esquerdaIgualdade, direitaIgualdade;
  direitaIgualdade  = x*w;
  esquerdaIgualdade = y*z;
  if(direitaIgualdade == 0)
  {
    if(x==0)
    {
      x = esquerdaIgualdade/w;
      return x;
    }
    else
    {
      w = esquerdaIgualdade/x;
      return w;
    }
  }
  if(esquerdaIgualdade == 0)
  {
    if(y == 0)
    {
      y = esquerdaIgualdade/z;
      return y;
    }
    else
    {
      z = esquerdaIgualdade/y;
      return z;
    }
  }
}
