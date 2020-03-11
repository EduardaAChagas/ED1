// //#ifndef COFO_H_
// #define COFO_H_
//     #ifdef_COFOI_C
//         typedef struct _Cofo_{
//             int nElms;
//             int maxElms;
//             int *elms;
//         }Cofo;
//         Cofo *cofCreate(int n);
//         int cofInsert(Cofo *c,int elms);
//         int cofRemove(Cofo *c,int key);
//         int cofQuery (Cofo *c,int key);
//         int cofDestroy(Cofo *c);
//     #else
//         typedef struct _Cofo_Cofo;
//         extern Cofo *cofCreate(int n);
//         extern int cofInsert(Cofo *c, int elms);
//         extern int cofRemove(Cofo *c,int key);
//         extern int cofDestroy(Cofo *c);
//         extern int cofQuery(Cofo *c, int key);
//     #endif
// #endif

typedef struct _Cofo_{
int nElms;
int maxElms;
int *elms;
}Cofo;
Cofo *cofCreate(int n);
int cofInsert(Cofo *c,int elms);
int cofRemove(Cofo *c,int key);
int cofQuery(Cofo *c,int key);
int cofDestroy(Cofo *c);