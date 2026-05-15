/*------------------------------------------------------------*
*                      FATEC Ipiranga                         *
*       Disciplina: Programação Estruturada e Modular         *
*                   Prof. Carlos Veríssimo                    *
*-------------------------------------------------------------*
* Objetivo do Programa: Implementar funções matemáticas       *
* recursivas para conversão, potência e soma de dígitos.      *
* Data - 15/05/2026                                           *
* Autor: Pedro Wesley                                         *
*-------------------------------------------------------------*/

#include <stdio.h>
#include "recursao.h"

void decToBin(int n)
{
    if (n > 1)
    {
        decToBin(n / 2);
    }

    printf("%d", n % 2);
}

int potencia(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }

    return base * potencia(base, exp - 1);
}

int somaDigitos(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (n % 10) + somaDigitos(n / 10);
}
