#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero_triangular(int num){
		
	int vetor=0;

	
		if(num==1){
			return 1;
			
		}else{
			vetor= numero_triangular(num-1) +num;
		}
		return vetor;

}

int main(){
	
	int num;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o tamanho do vetor:");
	scanf("%d", &num);
	
	printf("A quantidade de termos da %d posição é: %d ", num, numero_triangular(num));
	
}
