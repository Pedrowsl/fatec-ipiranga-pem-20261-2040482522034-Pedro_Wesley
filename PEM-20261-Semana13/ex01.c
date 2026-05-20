/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programaçao Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Endereço de memória                   *
* Data - 20/05/2026                                           * 
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>

int main(){

    int valor=50;
    int *ptr=&valor;
    char letra='A';
    char *pont=&letra;
    float nota=7.5;
    float *ponteiro=&nota;

    printf("Valor inteiro: %d\n", valor);
    printf("Endereco do inteiro: %p\n\n", ptr);

    printf("Valor caracter: %c\n", letra);
    printf("Endereco do caracter: %p\n\n", pont);

    printf("Valor float: %f\n", nota);
    printf("Endereco do float: %p\n", ponteiro);

    return 0;
}