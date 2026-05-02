#include <stdio.h>
#include "struct_no.h"

int soma_intervalo(Lista* l,int a,int b){
    Lista* aux=l; //percore a lista
    int somador=0;
    while(aux!=NULL){
        if(aux->info>=a && aux->info<=b) //caso encontre algum elemento
            somador+=aux->info;
        aux=aux->prox; //continua percorrendo a lista
    }
    return somador; //retorna a soma total
}
