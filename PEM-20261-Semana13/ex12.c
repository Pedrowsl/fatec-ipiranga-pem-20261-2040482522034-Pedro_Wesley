/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programaçao Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Selection Sort com ponteiros          *
* Data - 20/05/2026                                           * 
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>

void trocar(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *arr, int n) {

    for(int i = 0; i < n - 1; i++) {

        int *menor = arr + i;

        for(int j = i + 1; j < n; j++) {

            if(*(arr + j) < *menor) {
                menor = arr + j;
            }
        }

        if(menor != (arr + i)) {

            trocar(arr + i, menor);

            printf("Troca realizada:\n");

            for(int k = 0; k < n; k++) {
                printf("%d ", *(arr + k));
            }

            printf("\n");
        }
    }
}

int main() {

    int vetor[8] = {9, 4, 7, 1, 3, 8, 2, 5};

    printf("Antes:\n");

    for(int i = 0; i < 8; i++)
        printf("%d ", vetor[i]);

    printf("\n\n");

    selectionSort(vetor, 8);

    printf("\nDepois:\n");

    for(int i = 0; i < 8; i++)
        printf("%d ", vetor[i]);

    return 0;
}