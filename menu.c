#ifndef MENU_C
#define MENU_C

#include <stdio.h>

#include "arquivo.h"
#include "menu.h"

// imprime menu de opcoes
// pre-condicao: nenhum
// pos-condicao: nenhum
// entrada: nenhum
// saida: nenhum
void imprime_menu()
{

    printf("Bem vindo ao Sistema de Cadastro de Livros!\n");
    printf("\n");

    printf("[1] - Cadastrar Livro.\n");
    printf("[2] - Remover Livro.\n");
    printf("[3] - Buscar Livro.\n");
    printf("[4] - Listar Livros.\n");
    printf("[5] - Imprimir arvore por niveis.\n");
    printf ("[6] - Imprimir arvore formatada como lista.\n");
    printf ("[7] - Buscar por autor.\n");
    printf ("[8] - Buscar por titulo.\n");
    printf ("[9] - Calcular Total.\n");
    printf("[10] - Carregar o arquivo.\n");
    printf ("[11] - Imprimir Lista de Registros Livres.\n");
    printf("[0] - Encerrar programa!\n");

    printf("Entre com uma das opcoes acima: \n");
}


#endif
