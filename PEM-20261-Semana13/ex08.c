/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programaçao Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Distância entre ponteiros             *
* Data - 20/05/2026                                           * 
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>

int main() {

    double valores[10] = {1,2,3,4,5,6,7,8,9,10};

    double *p1 = &valores[2];
    double *p2 = &valores[7];

    printf("Diferenca entre ponteiros: %ld\n", p2 - p1);

    /*
      O compilador calcula a diferenca considerando
      a quantidade de elementos entre os ponteiros
      e nao a quantidade de bytes.
    */

    printf("\nValores entre os ponteiros:\n");

    while(p1 <= p2) {
        printf("%.1lf\n", *p1);
        p1++;
    }

    return 0;
}