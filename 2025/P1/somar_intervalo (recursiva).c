#include <stdio.h>
#include "struct_no.h"
int somar_intervalo(Lista *l,int a,int b){
    if(l==NULL)
        return 0;//caso chegue ao final da lista
    if(l->info>=a && l->info<=b)//se o elementos estiver dentro do intervalo
        return l->info + somar_intervalo(l->prox,a,b);//retorna a soma de todos os elementos
    return somar_intervalo(l->prox,a,b);//vai para o proximo elemento da lista
}
