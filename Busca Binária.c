#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int PesquisaBinaria ( int vet[], int chave, int Tam)
{
     int inf = 0;     //Limite inferior  (o primeiro elemento do vetor em C é zero          )
     int sup = Tam-1; //Limite superior  (termina em um número a menos 0 a 9 são 10 numeros )
     int meio;
     while (inf <= sup)
     {
          meio = (inf + sup)/2;
          if (chave == vet[meio])
               return meio;
          if (chave < vet[meio])
               sup = meio-1;
          else
               inf = meio+1;
     }
     return -1;   // não encontrado
}

int main(){
  int Vetor[10] = {77, 10, 23, 55, 44, 56, 54, 45, 58, 76}, chave, Tam;
  chave = 45;
  Tam = 10;
  printf(" O elemento %d está no indice %d", chave, PesquisaBinaria(Vetor, chave, Tam));
  return 0;
}
