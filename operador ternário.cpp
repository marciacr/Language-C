#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	// vari�vel = (condi��o) ? valor1 : valor2 ;
	// num = (true) ? 10: 20;
	
		int num, num2;
		printf("informe um n�mero: ");
		scanf("%d", &num);
		
		/*if( num < 0)
				num2 = 0;
				
				else
				num2 = num;
		*/
		num2 = (num < 0) ? 0 : num;		
				
				printf( "\no valor de num2 �: %d\n", num2);
	}
