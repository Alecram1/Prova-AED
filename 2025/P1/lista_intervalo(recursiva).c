#include <stdio.h>
#include "struct_no.h"

Lista* lista_intervalo(Lista* l,int a,int b){
    Lista* nova=null;
    if(l==NULL)//caso chegue ao final da lista
        return nova;
    if(l->info>=a && l->info<=b){//caso esteja dentro do intervalor
        nova=inserir(nova,l->info);
        nova->prox=lista_intervalo(l->prox,a,b);//concatenando os n�s
        return nova;//retorna a lista com o elemento inserido
    }
    return lista_intervalo(l->prox,a,b);
}
