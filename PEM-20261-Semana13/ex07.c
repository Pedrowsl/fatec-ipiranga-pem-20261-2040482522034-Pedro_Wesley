/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programaçao Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Percurso com incremento               *
* Data - 20/05/2026                                           * 
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>

int main() {

    int vetor[8] = {5, 8, 2, 15, 9, 1, 20, 7};
    int *p = vetor;

    int soma = 0;
    int maior = *p;
    int menor = *p;

    for(int i = 0; i < 8; i++) {

        printf("Valor: %d | Endereco: %p\n", *(p+i), (void*)(p+i));

        soma += *(p+i);

        if(*(p+i) > maior)
            maior = *(p+i);

        if(*(p+i) < menor)
            menor = *(p+i);
    }

    printf("\nSoma: %d\n", soma);
    printf("Media: %.2f\n", soma / 8.0);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}