#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordenacao_crescente(){
	
	int *vetor;
	int n, i,aux, temp,x , j,r = 0;	
	printf("digite o tamanho do vetor : ");
	scanf("%d", &n);
	
	aux = (n-1)/2;
	vetor = (int*)malloc(n*sizeof(int));
	printf("Digite os valores que serão ordenados:");
	
	for(i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}
while(aux!=0){

	for(i=1; i<n-aux; i++){
		
		j = i-1;
		x = vetor[j];
		temp = 1;
		
		while((j>=0)&&(x<vetor[j])){
			
				vetor[j+1] = vetor[j];
				j--;
				temp=0;
		}
		vetor[j+1] = x;
		while(temp ==0){
			aux = aux/2;
		}
		for(i=0; i<r; i++){
			printf("[%d]", vetor[i]);
		}
		 	 	 	
	}
}
}




int main(){
	
	setlocale(LC_ALL, "portuguese");
	ordenacao_crescente();
	
}
