#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define Max 100

struct pilha{

	int topo;
	int itens[Max];
};

int empty(struct pilha *p){
	if (p->topo==-1){
		return 1;
	}
	return 0;
}
int desempilhar(struct pilha *p){
//	int *w;
//	w = (struct pilha*)realloc(w, sizeof(struct pilha));
	if(empty(p)){
		printf("\nPilha Vazia");
		exit(1);
	}
	return (p->itens[--p->topo]);

}
void empilhar(struct pilha *p,int e){
	//int *w;
	//w = (struct pilha*)malloc(sizeof(struct pilha));
	if (p->topo ==Max){
		printf("\nImpossível , pilha cheia ");
		exit(1);

	}
	p->itens[++(p->topo)]=e;
	return;
}

int topo(struct pilha *p){
	return p->itens[p->topo];
}
int main (){

	setlocale(LC_ALL,"portuguese");
	struct pilha x;
	x.topo=-1;
	int i,w = 0;
	int tam =0;
	int z =1;
	printf("Digite:  1-empilhar \t 2-desempilhar \t 0-Sair ");

	while(z!=0){

		scanf("%d",&z);

		switch (z){

			case 1:
				printf("Digite o número a ser empilhado");
				scanf("%d",&w);
				empilhar(&x,w);
				tam++;
				break;

			case 2:
				
				printf(" Número %d retirado da pilha\n", x.itens[x.topo]);
				desempilhar(&x);
				tam--;
				break;

		}

				printf("Digite:  1-empilhar \t 2-desempilhar \t 0-Sair \n");

    }
    	printf("O tamanho da pilha é:", tam);
		for (i=(tam-1); i>=0; i--){

		printf("\n A pilha é:[%d]\n", x.itens[i]);
		}
	
		return 0;
}



