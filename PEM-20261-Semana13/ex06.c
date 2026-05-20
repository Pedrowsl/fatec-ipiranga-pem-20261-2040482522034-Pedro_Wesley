/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programaçao Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Struct via ponteiro                   *
* Data - 20/05/2026                                           * 
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[40];
    float preco;
    int estoque;
};

int main() {

    struct Produto produto;
    struct Produto *p = &produto;

    strcpy((*p).nome, "Mouse Gamer");
    (*p).preco = 150.90;
    (*p).estoque = 20;

    printf("Usando * e .\n");
    printf("Nome: %s\n", (*p).nome);
    printf("Preco: %.2f\n", (*p).preco);
    printf("Estoque: %d\n", (*p).estoque);

    printf("\nUsando ->\n");
    printf("Nome: %s\n", p->nome);
    printf("Preco: %.2f\n", p->preco);
    printf("Estoque: %d\n", p->estoque);

    return 0;
}