#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	int n, l, i, r, tam =0;
	int vet[100];
	int sobrevivente=0;	
	
	printf("Digite um n�mero: ->");
	scanf("%d", &n);

	if (n ==1){
		
		printf("o n�mero �: %d", n);
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
		// l = n�mero - 2^n;
		l = r - pow(2,(tam-1));
		sobrevivente= (2*l) +1;
		printf("\n O sobrevivente �: %d", sobrevivente);
}
/*	#include<conio.h>
	itoa(a, vetor, 2);
	printf("O n�mero %d em bin�rio �: %s\n\n", a, vetor);
	getch();	
*/	

/*		
		printf("\nO n�mero bin�rio �: -> ");
		for(i=0; i<tam; i++){
			printf("%d", vet[i]);
			}
		
			return 0;
	}	
 
*/

	

