#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void compara(){
	
	int x,n, i, v = 0;
	int *vetor;
	
	printf("O tamanho do vetor é:");
	scanf("%d", &n);
	
	vetor = (int *)malloc(n*sizeof(int ));
	for(i=0; i<n; i++){
		vetor[i] = x;
		x+=5;
	}
	
	printf("Digite o valor que deseja procurar:");
	scanf("%d", &v);
	
	for(i=0; i<n; i++){
		
		if(vetor[i] ==v){
		printf("O valor %d foi encontrado na posição %d", v, i);
			
		}
	}
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	compara();
	
		
}


