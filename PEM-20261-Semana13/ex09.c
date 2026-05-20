/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programaçao Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Inversão de array                     *
* Data - 20/05/2026                                           * 
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>

void inverter(int *arr, int n) {

    int *inicio = arr;
    int *fim = arr + n - 1;

    while(inicio < fim) {

        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {

    int vetor[7] = {1,2,3,4,5,6,7};

    printf("Antes:\n");

    for(int i = 0; i < 7; i++)
        printf("%d ", vetor[i]);

    inverter(vetor, 7);

    printf("\nDepois:\n");

    for(int i = 0; i < 7; i++)
        printf("%d ", vetor[i]);

    return 0;
}