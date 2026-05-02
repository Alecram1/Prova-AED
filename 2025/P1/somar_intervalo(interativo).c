#include <stdio.h>
#include "struct_no.h"

int soma_intervalo(Lista* l,int a,int b){
    Lista* aux=l;
    int somador=0;
    while(aux!=NULL){
        if(aux->info>=a && aux->info<=b)
            somador+=aux->info
        aux=aux->prox;
    }
    return somador;
}
