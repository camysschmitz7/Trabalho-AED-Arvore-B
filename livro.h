#ifndef LIVRO_H
#define LIVRO_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// estrutura do livro
typedef struct livros
{
    int cod;
    char titulo[150];
    char autor[250];
    char editora[50];
    int edicao;
    int ano;
    double preco;
    int estoque;
} LIVROS;

typedef struct no
{
    int reg;
    int dir;
    int esq;
    LIVROS livro;
} NO;

// Imprime os dados do livro.
// pre-condicao: Nenhum;
// pos-condicao: Nenhum;
// Entrada: Livro;
// Saida: Nenhum;
void imprime_livro(LIVROS livro);

// Recebe os dados do Livro.
// Pre-condicao: Nenhum;
// Pos-Condicao: Nenhum;
// Entrada: Nenhum;
// Saida: Livro;
LIVROS recebeLivro();

#endif
