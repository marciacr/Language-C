#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
    float num1,num2,resultado;
    char op = '0';

       	do{
       		
            num1 = num2 = resultado =  0;

            printf( "\n(1) somar\n");
            printf( "(2) subtrair\n");
            printf( "(3) multiplicar\n");
            printf( "(4) dividir\n");
			printf( "(0) Sair\n");
			
			printf( "\ninforme a operação:\n");
			printf("\t\t\t\t>>> ");
            op=getche();
            printf("\n\n");
            

			if(op!='0'){
				
            printf( "digite o primeiro número:	>>> ");
            scanf( "%f", &num1);
            printf( "\ndigite o segundo número:	>>> ");
            scanf( "%f", &num2);
        			}
            
                        
            if (op =='1'){
            	resultado = num1 + num2;
			
			}
			
			else if(op == '2'){
				resultado = num1 - num2;		
								}
			
			 else if(op == '3'){
			 	resultado = num1 * num2 ;
								}
								
			 else if(op == '4'){
				resultado = num1/num2;
								}
								
			printf("\nO resultado é: \t\t\t>>> %f <<<\n\n", resultado);
			
			system("\npause");
			system("cls");

}while(op!='0');
    

    return 0;
}


