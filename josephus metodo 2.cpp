#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	int n, l, i, r, tam =0;
	int vet[100];
	int sobrevivente=0;	
	
	printf("Digite um número: ->");
	scanf("%d", &n);

	if (n ==1){
		
		printf("o número é: %d", n);
	}else{
		
		r = n;
		for(i=99; i>=0; i--){
			
			while(n>=1){			
				vet[i] = n % 2;
				printf("%d", vet[i]);
				n = n/2;
				tam++;
			
			}
		}
	}
		//Sobrevivente = 2*l +1;
		// l = número - 2^n;
		l = r - pow(2,(tam-1));
		sobrevivente= (2*l) +1;
		printf("\n O sobrevivente é: %d", sobrevivente);
}
/*	#include<conio.h>
	itoa(a, vetor, 2);
	printf("O número %d em binário é: %s\n\n", a, vetor);
	getch();	
*/	

/*		
		printf("\nO número binário é: -> ");
		for(i=0; i<tam; i++){
			printf("%d", vet[i]);
			}
		
			return 0;
	}	
 
*/

	

