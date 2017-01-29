#include <stdio.h>

int main(){
	
	int i, j, me, n, troca, Vetor[10] = {77, 10, 23, 55, 44, 56, 54, 45, 58, 76};
  n, i = 0;

	while(Vetor[i] != NULL){
		if(i > 0)
			n++;
	   i++;  
	}
	
	for(i = 0; i < n-1; i++){
		me = i;
		
		for(j = i+1; j < n; j++){
			
			if(Vetor[j] < Vetor[me])
				me = j;
		}
		if(i != me){
			troca = Vetor[i];
			Vetor[i] = Vetor[me];
			Vetor[me] = troca;
		}
	}	
	i = 0;
	for(i = 0; i < n; i++){
		printf(" %d", Vetor[i]);
	}
	return 0;
}
