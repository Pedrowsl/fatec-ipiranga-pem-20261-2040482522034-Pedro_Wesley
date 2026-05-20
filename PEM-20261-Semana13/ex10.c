/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programaçao Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Busca em matriz com ponteiro          *
* Data - 20/05/2026                                           * 
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>

int main() {

    int matriz[4][4] = {
        {1, 5, 3, 4},
        {8, 2, 7, 6},
        {9, 10, 12, 11},
        {15, 14, 13, 16}
    };

    int *p = &matriz[0][0];

    int maior = *p;
    int linha = 0;
    int coluna = 0;

    for(int i = 0; i < 16; i++) {

        if(*(p+i) > maior) {
            maior = *(p+i);
            linha = i / 4;
            coluna = i % 4;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Posicao: [%d][%d]\n", linha, coluna);

    return 0;
}