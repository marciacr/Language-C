#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



void quick(int *vetor, int esq, int dir){
	int i,j, meio, aux;
	
	i = esq;
	j= dir;
	meio = vetor[(esq + dir)/2];
	
	while(esq<dir){
		while((vetor[i]<meio) && (i< dir)){
			i++;
		}
		while((vetor[j]>meio)&(j>esq)){
			j--;
		}
		
		if(i<=j){
			aux =vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i++;
			j--;
		}
		if(j>esq){
			quick(vetor, esq, j);
		}
		if(i<dir){
			quick(vetor, i, dir);
		}
		
		
	}
}
int main(int agrc, char** argv){

	setlocale(LC_ALL,"portuguese");
	int *vetor;
	int n,i;
	
	printf("Digite o tamanho do vetor:");
	scanf("%d", &n);
	
	vetor = (int*)malloc(n*sizeof(int));
	
	printf("Digite os valores que deseja ordenar:");
	for(i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}
	
	quick(vetor, 0 , n);
	
	printf("O vetor ordenado é:");
	for(i=0; i<n; i++){
		printf("\n[%d]\n", vetor[i]);
	}


}
