#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordenacao_crescente(){
	
	int *vetor;
	int i ,n, j,x=0;
	
	printf("Digite o número de termos que deseja ordenar:");
	scanf("%d", &n);
	
	vetor = (int*)malloc(n*sizeof(int));
	printf("Digite os valores que deseja inserir:\n ");
	
	for(i=0; i<n; i++){
		
		scanf("%d", &vetor[i]);
	}
	
	printf("Seu vetor em ordem crescente é:");
	
	for(i =1; i<n; i++ ){
		j = i-1;
		x= vetor[i];
		while((j>=0)&&(x<vetor[j])){
			
				vetor[j+1] = vetor[j];
				j--;
		}
	vetor[j+1] = x;
	}
	for(i=0; i<n; i++){
		
		printf(" [%d] ", vetor[i]);	
	}

}
int main(){
	
	setlocale(LC_ALL, "portuguese");
	ordenacao_crescente();
	
}
