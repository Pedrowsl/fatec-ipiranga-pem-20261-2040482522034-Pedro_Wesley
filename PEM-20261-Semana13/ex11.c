/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programaçao Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Função com múltiplos retornos         *
* Data - 20/05/2026                                           * 
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>

void estatisticas(int *v, int n, int *soma, float *media, int *maior, int *menor) {

    *soma = 0;
    *maior = v[0];
    *menor = v[0];

    for(int i = 0; i < n; i++) {

        *soma += v[i];

        if(v[i] > *maior)
            *maior = v[i];

        if(v[i] < *menor)
            *menor = v[i];
    }

    *media = (float)(*soma) / n;
}

int main() {

    int vetor[6] = {4, 8, 1, 9, 3, 7};

    int soma, maior, menor;
    float media;

    estatisticas(vetor, 6, &soma, &media, &maior, &menor);

    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}