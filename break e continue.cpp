#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//break -> interrompe o loop e o finaliza.
//continue -> interrompe apenas o laço atual.

int main(){
	setlocale(LC_ALL, "portuguese");
	int x;
	
	for( x = 0; x <= 10; ++x){
		
		if(x==2){
			printf( "-\n");
			continue;
		}
		
		if(x==8){
			printf("-\n");
			break;
		}
		printf ("%i\n", x);
	}
	
	return 0;
}
