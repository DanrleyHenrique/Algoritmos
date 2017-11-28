#include "stdio.h"

int * divisores(int numero, int *quantidade)
{
  int q = 0, bytes, in = 0;
  for(int i = 1; i <= numero; i++)
  {
    if(numero%i == 0)
    {
      q++;
    }
  }
  bytes = q*4;
  int *ponteiro = (int*)malloc(sizeof(bytes));
  
  for(int i = 1; i <= numero; i++)
  {
    if(numero%i == 0)
    {
      *(ponteiro+in) = i;
      in++;
    }
  }
  *quantidade = q;
  return ponteiro;
}

int main(void) {
  int * divisores(int numero, int *quantidade);
  int *quantidade, numero, *vetor;
  printf("Insira um inteiro\n");
  scanf("%d", &numero);
  vetor = divisores(numero, &quantidade);
  printf("Quantidade de divisores: %d\n\n", quantidade);
  printf("Divisores\n");
  
  printf("-> ");
  for(int i = 0; i < quantidade; i++)
  {
    printf("%d ", *(vetor+i));
  }
  printf("<-\n");
  return 0;
}
