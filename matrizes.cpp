#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

int main(){

setlocale(LC_ALL, "portuguese");

int i, j = 1;
int n;

	printf("digite o valor de n:");
	scanf("%d", &n);
	int matriz[n][n];

setbuf(stdin,NULL);

for(i=0;i<n ; i++){
	for(j=0;j<n ; j++){
		
		matriz[i][j] = ((i+1)*(j+1));
	printf("%d\t", matriz[i][j]);
		

	}
	printf("\n");
}


}



