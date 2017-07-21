#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

setlocale(LC_ALL, "portuguese");

unsigned int n;
int fat= 1;



	
while(n>0){
	
	printf("Digite um valor positivo:");
	scanf("%d", &n);
	
	for(fat=1; n>1; n--){
	  fat = n*fat;
    }
   
printf("O fatorial de n é: %d\n", fat);
}


return 0;



}
