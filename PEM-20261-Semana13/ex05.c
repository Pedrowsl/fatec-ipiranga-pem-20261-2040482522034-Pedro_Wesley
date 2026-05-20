/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programaçao Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Modificação indireta                  *
* Data - 20/05/2026                                           * 
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>

int main() {

    int vetor[5] = {1, 2, 3, 4, 5};
    int *p = vetor;

    printf("Antes:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    for(int i = 0; i < 5; i++) {
        *(p + i) *= 2;
    }

    printf("\nDepois:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}