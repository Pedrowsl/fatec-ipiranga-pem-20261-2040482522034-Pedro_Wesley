/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programaçao Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Troca de valores via referência       *
* Data - 20/05/2026                                           * 
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int x = 10;
    int y = 20;

    printf("Antes da troca:\n");
    printf("x = %d | y = %d\n", x, y);

    trocar(&x, &y);

    printf("Depois da troca:\n");
    printf("x = %d | y = %d\n", x, y);

    return 0;
}