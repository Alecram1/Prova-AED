#include <stdio.h>
#include "struct_no.h"

Lista* lista_intervalo(Lista* l,int a,int b){
    Lista* nova=NULL;
    if(l==NULL)//caso chegue ao final da lista
        return nova;
    if(l->info>=a && l->info<=b){//caso esteja dentro do intervalor
        Lista* nova=(Lista*)malloc(seizeof(Lista));// OBS: Nao esta sendo usada a funcao "inserir" pois ela coloca o proximo no como NULL
        nova->info=l->info;
        nova->prox=lista_intervalo(l->prox,a,b);//encadeia com o proximo elemento da lista
        return nova;//retorna a lista com o elemento inserido
    }
    return lista_intervalo(l->prox,a,b);
}
