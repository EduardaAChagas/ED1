#include <stdio.h>
#include <stdlib.h>
#include "cofo.h"
#include <string.h>
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
    Cofo *cofo;
    Aluno luigi, remov;
    int search,key_cpf;
    cofo = criarcofo(10);
    strcpy(luigi.nome,"Luigi");
    luigi.cpf=6500;
    luigi.saldoBanco=20.00;
    inserirAluno(cofo,&luigi);
    printf("insira o cpf para pesquisar: ");
    scanf("%d",&key_cpf);
    search=pesquisarAluno(cofo,key_cpf);
    printf("%d",search);
    remov=removeAluno(cofo,key_cpf);
    printf("%s --- %i --- %f",remov.nome,remov.cpf,remov.saldoBanco);
    destruirCofoAluno(cofo);

    return 0;
}

Cofo *criarcofo(int numero){
    /*
    Cofo *gabi;
    if(n>0){
        gabi=((Cofo*)malloc(sizeof(Cofo)));
        if(gabi!=NULL){
            gabi->alunos=((Aluno*)malloc(sizeof(Aluno)*numero));
            if (gabi->alunos!=NULL){
                gabi->qtdeAlunes=0;
                gabi->maxAlunes=numero;
                return gabi;
            }
        }
    }
    return NULL;
    */

   if(numero>0){
       Cofo *c;

       c=(Cofo*)malloc(sizeof(Cofo));
       if(c!=NULL){
           c->alunos=(Aluno*)malloc(numero*sizeof(Aluno));
           c->qtdeAlunes=0;
           c->maxAlunes=numero;
           return c;
       }
       return NULL;
   }
   return NULL;
}

int inserirAluno(Cofo *gabi,Aluno *luigi){
    if(gabi!=NULL){
        if((gabi->qtdeAlunes)<(gabi->maxAlunes)){
            gabi->alunos[gabi->qtdeAlunes]=*luigi;
            gabi->qtdeAlunes++;
            return true;
        }
    }
    return false;
}


Aluno removeAluno(Cofo *gabi,int key_cpf){
    int i,j;
    Aluno luigi;
    if (gabi!=NULL){
        if(gabi->qtdeAlunes>0){
            i=0;
            while((gabi->alunos[i].cpf!=key_cpf) && (i<gabi->qtdeAlunes)){
                i++;
            }
            if (gabi->alunos[i].cpf==key_cpf){
                luigi=gabi->alunos[i];
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
        while ((gabi->alunos[i].cpf!=key_cpf) && (i<gabi->qtdeAlunes)){
            i++;
        }
        if (gabi->alunos[i].cpf==key_cpf){
            return gabi->alunos[i].cpf;
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