#include<stdio.h>

struct Livro
{
   char titulo[50];
   char autor[50];
   int ano_publicacao;
};

int main(){
    struct Livro livro;

    printf("Digite o titulo do livro");
    scanf("%[^\n]", livro.titulo);
    printf("Digite o nome do autor");
    scanf(" %[^\n]", livro.autor);
    printf("Digite o ano de publicação");
    scanf("%d", &livro.ano_publicacao);

    printf("\nInformações do Livro:\n");
    printf("Titulo: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Ano Publicação: %d\n", livro.ano_publicacao);

return 0;
}


