#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



struct Soldado{
	
	int numero;
	struct Soldado *proximo;

};
//Criação da lista:
void enfileirar(Soldado **p ){
		
		int x, j;
		struct Soldado *w,*z;
		w=z=*p;
		printf("Digite a quantidade de soldados:");
		scanf("%d", &x);
		
		for(j=0;j<x;j++){
			
			z=(Soldado *)malloc(sizeof(struct Soldado));
			z->numero = j+1;
			z->proximo = NULL;
			
			if (*p == NULL){
				*p = z;
			}else {
				w->proximo = z;
			}
			w=z;
		}
	w->proximo = *p;
}

int vencedor ( Soldado **p){
	int x;
	struct Soldado *r, *t;
	r=t=*p;
	
	while (r->proximo !=r ){
		
		t=r;
		r= r->proximo;
		t->proximo = r->proximo;
	
		printf("O soldado %d morreu!!\n", r->numero);
		free(r);	
			
		r = t->proximo;
	
	}
	
	*p= r;
	return (r->numero);
}

void mostrar(struct Soldado *p){
		
		struct Soldado *p2;
		
		p2 = p;
		printf("%d\n", p2->numero);
		p2 = p2->proximo;
		while(p != p2){
			
			printf("%d\n", p2->numero);
			p2 = p2->proximo;
		}
	
	printf("\n");
	
}

int main (){
	
	setlocale(LC_ALL,"portuguese");
	struct Soldado *p = NULL;
	int venc;
	enfileirar(&p);
	
	printf("As pessoas na batalha são:\n");
	mostrar(p);
	
	venc = vencedor(&p);
	
	printf ("\nO sobrevivente é: %d ", venc);
	free(p);
	
	return 0;
}	
		
		
		
	
	
	

	

