#include<math.h>
#include<stdio.h>
#include<stdlib.h>

struct no
{
    int dado;
    struct no *proximo;
};

typedef struct no *No;

No cria_no(int dado)
{
    No novo_no = (No) malloc(sizeof(No));
    novo_no->dado = dado;//??
    return novo_no;
}

void insere_inicio(No *raiz, int dado)
{
    No novo_no = cria_no(dado);
    novo_no->proximo = *raiz;//?
    *raiz = novo_no;
}

void remove_inicio(No *raiz)
{
    No atual = *raiz;//?
    *raiz = (**raiz).proximo ;
    free(atual);
}

void imprimi_lista_encadeada(No raiz)
{
    No p;
    for (p = raiz; p != NULL; p = p->proximo)
    {
        printf ("%d\n", p->dado);
    }
}

int main()
{

    No raiz = NULL;

    imprimi_lista_encadeada(raiz);

    insere_inicio (&raiz, 10);
    insere_inicio (&raiz, 20);
    insere_inicio (&raiz, 30);

    imprimi_lista_encadeada(raiz);

    remove_inicio(&raiz);
    remove_inicio(&raiz);

    printf ( "\n\n" );
    imprimi_lista_encadeada(raiz);
}
