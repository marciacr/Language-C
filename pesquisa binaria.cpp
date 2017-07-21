#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void buscar(int *vetor, int n){
	
	int i,x,inicio, fim,v, media=0;
	
	printf("\nSeu vetor atual �:");
	for(i=0; i<n; i++){
		vetor[i] = x;
		x++;
		printf("[%d]", vetor[i]);
	}
	
	printf("\nDigite o valor que deseja procurar:");
	scanf("%d", &v);
	
	inicio = 0;
	fim = n;
	
	while(inicio<=fim){
	
	media = ( inicio+ fim)/2;
		
		
		if(v ==vetor[media]){
		
			printf("\nQue sorte! Voc� encontrou o numero %d na posi��o %d\n", v, vetor[media]+1);
			break;
			
		}else if(v< vetor[media]){

			fim = media -1;
			printf("O vetor �:");
			for (i=0; i<fim; i++){
				printf("[%d]", vetor[i]);
			}
			printf("\n---------------------------------\n");
			continue;

		}else if(v> vetor[media]){
	
			inicio = media +1;
			printf("O vetor �:");
			for (i=inicio; i<fim; i++){
				printf("[%d]", vetor[i]);
			}
			printf("\n---------------------------------\n");
			continue;
			
		}
		
	}
	if(v!= vetor[media]){
		printf("O valor n�o foi encontrado!");
	}
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	int n;
	int *vetor; 
	
	printf("O tamanho do vetor �:");
	scanf("%d", &n);
	
	vetor = (int *)malloc(n*sizeof(int ));
	buscar(vetor, n);

	
}
