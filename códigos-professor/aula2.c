#include <stdio.h>
#include <stdlib.h>
#include "cofo.h"
#define true 1
#define false 0

void main(void){
    Cofo *c;
    int a;
    c = cofCreate(10);
    cofInsert(c,a);
    a=17;
    cofInsert(c,a);
    a=cofQuery(c,12);
    printf("%d",a);
    a=cofRemove(c,12);
    a=cofDestroy(c);
}
Cofo *cofCreate(int n){
    Cofo *c;
    if (n>0){
        c=((Cofo*)malloc(sizeof(Cofo)));
        if (c!=NULL){
            c->elms=((int*)malloc(sizeof(int)*n));
            if(c->elms!=NULL){
                c->nElms=0;
                c->nElms=n;
                return c;
            }//3° if
        }//2° if
    }//1° if
    return NULL;
}//função

int cofDestroy(Cofo *c){
    if (c!=NULL){
        if (c->nElms==0){
            free(c->elms);
            free(c);
            return true;
        }//if de dentro
    }//if de fora
    return false;
}


int cofInsert(Cofo *c, int elms){
    if(c!=NULL){
        if (c->nElms<c->maxElms){
            c->elms[c->nElms]=elms;
            c->nElms++;
            return true;
        }//if
    }//if
    return false;
}

int cofQuery(Cofo*c, int key){
    int i;
    if(c!=NULL){
        if (c->nElms>0){
            i=0;
            while ((c->elms[i]!=key)&&(i<c->nElms)){
                i++;
                if(c->elms[i]==key)
                    return c->elms[i];
            }//while
        }//if
    }//if
    return -1;
}//função


int cofRemove(Cofo *c, int key){
    int i,j,elm;
    if(c!=NULL){
        if (c->nElms>0){
            i=0;
            while ((c->elms[i]!=key)&&(i<c->nElms)){
                i++;
                if(c->elms[i]==key)
                    for(j=i;j<c->nElms-2;j++){
                        c->elms[j]=c->elms[j+1];
                    }
                    c->nElms--;
                    return elm;
            }//while
        }//if
    }//if
    return -1;
}//função

