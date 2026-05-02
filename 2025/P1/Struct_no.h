#ifndef LISTA
#define LISTA
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
}Lista;

Lista* inserir(Lista* l,int info){
    Lista* aux=(Lista*)malloc(sizeof(Lista)); //Reserva um espa�o na memoria para o novo elemento
    aux->info=info;
    aux->prox=l;
    return aux;//retorna uma lista ja com o novo elemento
}

Lista* inverter(Lista* l){
    Lista* aux=l;//usada para percorrer a lista
    Lista* nova=NULL;//guarda a inversao
    while(aux!=NULL){
        nova=inserir(nova,aux->info);
        aux=aux->prox;
    }
    return nova;//retorna a lista invertida
}

#endif
