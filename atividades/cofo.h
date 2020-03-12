typedef struct _Aluno_{
    char nome[50];
    int cpf;
    float saldoBanco;
}Aluno;

typedef struct _cofo_{
    int qtdeAlunes;
    int maxAlunes;
    Aluno *alunos;
}Cofo;

Aluno *criarAluno(int n);
int inserirAluno(Cofo *gabi,Aluno *luigi);
int removeAlnuo(Cofo *gabi,int key_cpf);
int pesquisarAluno(Cofo *gabi,int key_cpf);
int destruirCofoAlunos(Cofo *gabi);