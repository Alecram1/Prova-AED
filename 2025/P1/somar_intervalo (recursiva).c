#include <stdio.h>
#include "struct_no.h"
int somar_intervalo(Lista *l,int a,int b){
    if(l==NULL)
        return 0;
    if(l->info>=a && l->info<=b)
        return l->info + somar_intervalo(l->prox,a,b);
    return somar_intervalo(l->prox,a,b);
}
