#include <stdio.h>
#include "struct_no.h"

Lista* lista_intervalo(Lista* l,int a,int b){
	Lista* l2=NULL; //lista que sera retornada
	Lista* aux=l; //verifica cada elemento da lista
	while(aux!=NULL){
		if(aux->info>=a && aux->info<=b)//caso esteja dentro do intervalo
			l2=inserir(l2,aux->info);
		aux=aux->prox;
	}
	return inverter(l2); //retorna o intervalo
}
