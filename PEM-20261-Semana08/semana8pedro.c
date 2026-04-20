/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programaçao Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Gestão de Carga e Logística           *
* Data - 20/04/2026                                           * 
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>

void processarCarga(float *ptr_vetor, int tamanho){
    float media=0;

    for(int i=0; i<tamanho; i++){                    // Calculando média
        media+=*(ptr_vetor+i);
    }
    media=media/tamanho;
    printf("\nMedia: %.2f", media);
    media=media*1.1;

    for(int i=0; i<tamanho; i++){
        if(*(ptr_vetor+i) > media){
            *(ptr_vetor+i)-=*(ptr_vetor+i)*0.05;
        }
    }
}

int main(){

    float pesos[10]={32.52, 23.3, 42.87, 50, 64.2, 20.5, 15.2, 10, 47.1, 4.2};
    int i;

    printf("Tamanho das cargas atualmente:    ");
    for(i=0; i<10; i++){
        printf(" %.2f |", pesos[i]);
    }

    processarCarga(pesos, 10);

    printf("\nTamanho das cargas pos-validacao: ");
    for(i=0; i<10; i++){
        printf(" %.2f |", pesos[i]);
    }

    return 0;
}