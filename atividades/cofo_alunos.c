#include <stdio.h>
#include <stdlib.h>
#include "cofo.h"
#define true 1
#define false 0

int main(void){
/*    Cofo *c;
    int a;
    c = cofCreate(10);
    cofInsert(c,a);
    a=17;
    cofInsert(c,a);
    a=cofQuery(c,12);
    printf("%d",a);
    a=cofRemove(c,12);
    a=cofDestroy(c);
*/
    return 0;
}

Cofo *criarcofo(int maxAlunes){
    Cofo *c;
    if(n>0){
        c=((Cofo*)malloc(sizeof(Cofo)));
        if(c!=NULL){
            c->alunos=((Aluno*)malloc(sizeof(Aluno)*maxAlunes));
            if (c->alunos!=NULL){
                c->qtdeAlunes=0;
                c->maxAlunes=maxAlunes;
                //c->qtdeAlunes=maxAlunes;
                return c;
            }
        }
    }
    return NULL;
}


int inserirAluno(Cofo *gabi,Aluno *luigi){
    if(gabi!=NULL){
        if(gabi->alunos<c->maxAlunes){
            gabi->alunos[c->qtdeAlunes]=luigi;
            gabi->qtdeAlunes++;
            return true;
        }
    }
    return false;
}


int removeAluno(Cofo *gabi,int key_cpf){
    int i,j,luigi;
    if (gabi!=NULL){
        if(gabi->qtdeAlunes>0){
            i=0;
            while((gabi->alunos[i]->cpf!=key_cpf) && (i<gabi->qtdeAlunes)){
                i++;
            }
            if (gabi->alunos[i]->cpf==key_cpf){
                luigi=c->alunos[i];
                for (j=i;j<gabi->qtdeAlunes-2;j++){
                    gabi->alunos[j]=gabi->alunos[j+1];
                }
                gabi->qtdeAlunes--;
                return luigi;
            }
        }
    }
}


int pesquisarAluno(Cofo *gabi,int key_cpf){
    int i;
    if (gabi!=NULL){
        if (gabi->qtdeAlunes>0)
            i=0;
        while ((gabi->alunos[i]->cpf!=key_cpf) && (i<gabi->qtdeAlunes)){
            i++;
        }
        if (gabi->alunos[i]->cpf==key_cpf){
            return gabi->alunos[i];
        }
    }
    return -1;
}


int destruirCofoAluno(Cofo *gabi){
    if (gabi!=NULL){
        if (gabi->qtdeAlunes==0){
            free(gabi->alunos);
            free(gabi);
            return true;
        }
    }
    return false;
}