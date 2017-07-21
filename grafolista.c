#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXVERTICES 100
#define MAXARESTAS 300

typedef struct TipoItem{
	
	int cidade;
	int distancia;
	
} TipoItem;

typedef struct TipoCelula *TipoPonteiro;

struct TipoCelula{
	
	TipoItem item;
	TipoPonteiro prox;
	
}TipoCelula;

typedef struct TipoLista{
	
	TipoPonteiro primeiro, ultimo;
}TipoLista;

typedef struct TipoGrafo{
	
	TipoLista adj[MAXVERTICES + 1];
	int NumVertice;
	short NumAresta;
	
}TipoGrafo;

TipoPonteiro aux;
int i;
int Distancia;
int adj, V1, V2;
TipoGrafo Grafo;
int NAresta,NVertice; 

int ListaVazia(TipoLista List ){
	
	return(List.primeiro ==List.ultimo);
}

void Insere(TipoItem *x, TipoLista *Lista){
	
	Lista->ultimo->prox = (TipoPonteiro)malloc(sizeof(TipoCelula));
	Lista->ultimo = Lista->ultimo->prox;
	Lista->ultimo->item =*x;
	Lista->ultimo->prox = NULL; 
	
}

void InserirAresta(int *V1, int *V2, int *Distancia, TipoGrafo *Grafo){
	TipoItem x;
	x.cidade = *V2;
	x.distancia = *Distancia;
	Insere(&x, &Grafo->adj[*V1]);
	
}

void Imprime_Grafo(TipoGrafo *Grafo){
	
	int i;
	TipoPonteiro aux;
	
	for(i=0; i< Grafo->NumVertice; i++){
		
		printf("\nCidade %d:", i+1);
		if(!ListaVazia(Grafo->adj[i])){
			aux = Grafo->adj[i].primeiro->prox;
			
			while(aux!= NULL){
				printf("%d(%d)\n", aux->item.cidade, aux->item.distancia);
				aux = aux->prox;
			}
		}
	putchar('\n');
	}

	
}
int main(int argc, char *argv[]){
	
	int TEMP;
	int TEMP1;
	
	setlocale(LC_ALL,"portuguese");
	
	
	
	printf("Digite o número de vertices:");
	scanf("%d*[^\n]", &TEMP);
	getchar();
	NVertice = TEMP;

	printf("Digite o número de arestas:");
	scanf("%d*[^\n]", &TEMP1);
	getchar();
	

	Grafo.NumVertice = NVertice;
	Grafo.NumAresta = 0;
	
	for(i=0; i<NAresta; i++){
		printf("Digite V1--V2--Distancia");
		scanf("%d%d%d*[^\n]", &TEMP, &TEMP1, &Distancia);
		getchar();
		
		V1 =TEMP;
		V2 = TEMP1;
		Grafo.NumAresta++;
		
		InserirAresta(&V1, &V2, &Distancia, &Grafo);
		
	}
	
	Imprime_Grafo(&Grafo);
	scanf("%*[^\n]");
	getchar();
	
}




