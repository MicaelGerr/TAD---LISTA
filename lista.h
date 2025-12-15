#pragma once 


typedef struct lista{
	int capacidade;
	int tamanho;
	int *lista;

} Lista;

Lista* cria_lista(int);
void mostra_lista(Lista*);
void preenche_lista(Lista*);
int remove_elementos(Lista*, int);
int remove_elementos_fim(Lista*, int);
int adiciona_elementos_fim(Lista*, int);
int adiciona_elementos(Lista*, int, int);
int insertionSort(Lista*);



