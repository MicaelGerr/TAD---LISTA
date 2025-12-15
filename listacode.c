#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void mostra_lista(Lista* lista){
	printf("Elementos da lista:"); 
	for(int i = 0; i<lista->tamanho;i++){
		printf("%d ", *(lista->lista+i));	
	}
	printf("\n");
	return;
}

static void mostrar_meu_saldo(void){



}


Lista* cria_lista(int capacidade){
	Lista *lista;
	lista = malloc(sizeof(Lista));
	lista->lista = malloc(capacidade*sizeof(*(lista->lista)));
	if(lista->lista == NULL){
		return NULL;
	}
	lista->capacidade = capacidade;
	lista->tamanho = 0;
	return lista;
}

void preenche_lista(Lista* lista){
	for(int i = 0; i<(lista->capacidade);i++){
		scanf("%d", lista->lista+i);
		lista->tamanho++;	
	}
	return;	
}

int remove_elementos(Lista*lista, int indice){
	if(lista->tamanho>0){
		int i; 
		for( i = indice-1; i<(lista->tamanho);i++){
			*(lista->lista+i)= *(lista->lista+i+1); 
		}
		*(lista->lista+i) = 0;	
		lista->tamanho--;
		return 1;
	}
	return 0;	
}

int remove_elementos_fim(Lista*lista, int value){
	if(lista->tamanho>0){
		lista->tamanho--;
		return 1;			
	}	
	return 0;	
}



int adiciona_elementos_fim(Lista*lista, int value){
	if(lista->tamanho >= lista->capacidade){
		return 0;	
	}else{
		lista->tamanho++;
		*(lista->lista+lista->tamanho-1) = value;	
	}
	return 1;	
}

int insertionSort(Lista*lista){
	int j,aux;
	for(int i = 1;i<lista->tamanho;i++){
		j = i-1;
		aux = *(lista->lista+i);	
		while(0<=j && aux < lista->lista[j]){ // 1 2 3 , 5
			lista->lista[j+1] = lista->lista[j];		
			j--;
		}
		lista->lista[j+1] = aux;
	}	

	
}






