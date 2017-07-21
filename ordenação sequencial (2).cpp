#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordenacao_crescente(){
	
	setlocale(LC_ALL, "portuguese");
	
	int *vetor;
	int i,j, n, tam, k, x = 0;
	
	printf("Digite o números de termos do vetor:");
	scanf("%d", &n);
	
	vetor=(int*)malloc(n*sizeof(int));
	
	printf("Digite os termos que deseja ordenar:");
	for(i=0; i<n; i++){
		
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<n; i++){
		x = vetor[i];
			
		for(j =i+1; j<n; j++){
		
			if (vetor[i]>vetor[j]){
				
				k = j;
				vetor[i] = vetor[k];
				vetor[k] = x;
			}
		}
		printf("[%d]",vetor[i]);

		}
	}


int main(){
	
	setlocale(LC_ALL, "portuguese");
	ordenacao_crescente();
	
}
