/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programaçao Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Mapa de endereços de um struct        *
* Data - 20/05/2026                                           * 
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

int main() {

    struct Aluno aluno;

    strcpy(aluno.nome, "Pedro");
    aluno.matricula = 12345;
    aluno.media = 8.5;

    printf("Endereco nome: %p\n", (void*)&aluno.nome);
    printf("Endereco matricula: %p\n", (void*)&aluno.matricula);
    printf("Endereco media: %p\n", (void*)&aluno.media);

    /*
      Os enderecos geralmente ficam proximos porque os campos
      da struct sao armazenados de forma sequencial na memoria.
      Porem podem existir pequenos espacos chamados padding
      para alinhamento de memoria.
    */

    return 0;
}