#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include <conio.h>
#include<string.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	int n, tam, i ,j,x= 0;
	char vetor[100];
	char vetor2[100];
	int sobrev, valor = 0;
	
	printf("Bem vindo ao círculo da morte!\n");
	printf("Digite o número de pessoas que desejam brincar: ->");
	scanf("%d", &n);
	
	itoa(n, vetor, 2);
	printf("\nO número %d em binário é: %s\n", n, vetor);
	getch();
	
	tam = strlen(vetor);

	strncpy(vetor2, vetor, tam);
	
	vetor2[tam] = vetor[0];
	vetor2[0] = '0';
	
	for(i=0; i<tam; i++){
	
		x = vetor2[i+1];
		vetor2[i]=x; 
	}
	vetor2[tam] = NULL;
	
	printf("\nO número binário invertido é:");
	printf("%s", vetor2);
	
	j =0;
	for(i=tam-1; i>=0; i--){
		
		if(vetor2[i] =='1'){
		
			valor = pow(2, j);
			j++;
			
		}else{
			
			valor = 0;
			j++;
		}		
		sobrev = sobrev +valor;
	}

	printf("\n\7\7O sobrevivente do círculo é: %d!", sobrev);

}






	
