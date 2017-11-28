#include "stdio.h"

int main(void) {
  float soma = 0, media, f;
  printf("n para tamanho do vetor\n");
  int n;
  scanf("%d", &n);
  int bytes = 4*n;
  float *ponteiro = (float*)malloc(sizeof(bytes));
  
  for(int i = 0; i < n; i++)
  {
    printf("%dº elemento: ", i+1);
    scanf("%f", &f);
    *(ponteiro+i) = f;
  }
  for(int i = 0; i < n; i++)
  {
    soma += *(ponteiro+i);
  }
  media = soma/n;
  printf("Media: %.2f\n", media);
  free(ponteiro);
  return 0;
}
