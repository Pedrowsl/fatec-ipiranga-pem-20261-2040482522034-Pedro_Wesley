/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programaçao Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Tamanho de um ponteiro                *
* Data - 20/05/2026                                           * 
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>

int main() {

    printf("Tamanho ponteiro int: %zu bytes\n", sizeof(int*));
    printf("Tamanho ponteiro float: %zu bytes\n", sizeof(float*));
    printf("Tamanho ponteiro double: %zu bytes\n", sizeof(double*));
    printf("Tamanho ponteiro char: %zu bytes\n", sizeof(char*));

    /*
      O tamanho dos ponteiros normalmente NAO varia com o tipo apontado.
      Isso acontece porque todos armazenam apenas enderecos de memoria.
      Em sistemas 64 bits geralmente possuem 8 bytes.
      Em sistemas 32 bits geralmente possuem 4 bytes.
    */

    return 0;
}