#include "livro.h"

void imprime_livro (LIVROS livro){
    printf ("\nCodigo: %d\n", livro.cod);
    printf ("Titulo: %s\n", livro.titulo);
    printf ("Autor: %s\n", livro.autor);
    printf ("Editora: %s\n", livro.editora);
    printf ("Edicao: %d\n", livro.edicao);
    printf ("Preco: %.2lf\n", livro.preco);
    printf ("Estoque: %d\n", livro.estoque);
}


LIVROS recebeLivro(){
    LIVROS livro;
    char tempPreco [50];

    printf ("Entre com os dados do Livro.\n\n");

    printf ("Codigo:");
    scanf ("%d", &livro.cod);
    getchar ();

    printf ("Titulo:");
    fgets (livro.titulo, sizeof(livro.titulo), stdin);
    livro.titulo[strcspn(livro.titulo, "\n")] = '\0'; // Remove o caractere de nova linha

    printf ("Autor:");
    fgets(livro.autor, sizeof(livro.autor), stdin);
    livro.autor[strcspn(livro.autor, "\n")] = '\0';

    printf ("Editora:");
    fgets(livro.editora, sizeof(livro.editora), stdin);
    livro.editora [strcspn(livro.editora, "\n")] = '\0';

    printf ("Edicao:");
    scanf("%d", &livro.edicao);
    getchar();

    printf ("Ano:");
    scanf("%d", &livro.ano);
    getchar();

    printf ("Preco:");
    scanf("%lf", &livro.preco);
    getchar();
    fgets(tempPreco, sizeof(tempPreco), stdin);
    tempPreco[strcspn(tempPreco, "\n")] = '\0'; // Remove o caractere de nova linha
    for(int i = 0; i < strlen(tempPreco); i++){
        if(tempPreco[i] == ','){
            tempPreco[i] = '.';
        }
    }
    livro.preco = atof(tempPreco);

    printf ("Estoque: ");
    scanf("%d", &livro.estoque);
    getchar();


    return livro;
    
}
