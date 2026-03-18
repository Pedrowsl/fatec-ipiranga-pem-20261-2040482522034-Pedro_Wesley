/*
Xeque Pastor
Disciplina: Programação Estruturada e Modular
Curso: Análise e Desenvolvimento de Sistemas
Professor: Carlos Veríssimo

Aluno: Pedro Wesley Pinto de Magalhães
*/

#include <stdio.h>
#include <string.h>


char tabuleiro[8][9][4];

// função pra colocar todas as "peças" no tabuleiro
void inicializarTabuleiro(){

    int i, j;

    // Todas as casas vazias
    for(i=0; i<8; i++){
        for(j=0; j<9; j++){
            strcpy(tabuleiro[i][j], "   ");
        }
    }

    // Numeros ao lado e os peões
    for(i=0; i<8; i++){
        sprintf(tabuleiro[i][0], "%d", 8-i);
        sprintf(tabuleiro[1][i+1],"PP%d", i+1);
        sprintf(tabuleiro[6][i+1], "PB%d", i+1);
    }

    // Restante das peças
    //Pretas
    strcpy(tabuleiro[0][1], "tP1");
    strcpy(tabuleiro[0][2], "cP2");
    strcpy(tabuleiro[0][3], "bP3");
    strcpy(tabuleiro[0][4], "dP4");
    strcpy(tabuleiro[0][5], "rP5");
    strcpy(tabuleiro[0][6], "bP6");
    strcpy(tabuleiro[0][7], "cP7");
    strcpy(tabuleiro[0][8], "tP8");
    //Branca
    strcpy(tabuleiro[7][1], "TB1");
    strcpy(tabuleiro[7][2], "CB2");
    strcpy(tabuleiro[7][3], "BB3");
    strcpy(tabuleiro[7][4], "DB4");
    strcpy(tabuleiro[7][5], "RB5");
    strcpy(tabuleiro[7][6], "BB6");
    strcpy(tabuleiro[7][7], "CB7");
    strcpy(tabuleiro[7][8], "TB8");

}

// FUNÇÃO PARA MOVER AS PEÇAS DO TABULEIRO
void moverPeca(int linha_inicial, int coluna_inicial, int linha_final, int coluna_final){

    char peca[4];

    strcpy(peca, tabuleiro[linha_inicial][coluna_inicial]);
    strcpy(tabuleiro[linha_inicial][coluna_inicial], "...");
    strcpy(tabuleiro[linha_final][coluna_final], peca);

}

// FUNÇÃO PARA MOSTRAR O TABULEIRO
void  mostrar(){
    
    int i, j;

    for(i=0; i<8; i++){
        for(j=0; j<9; j++){
            printf("%s ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main(){

    inicializarTabuleiro(tabuleiro);

    //  ---------------- 1° JOGADA
    moverPeca(6,5,4,5);
    printf("\n==================================\n");
    printf("             Jogada #1\n");
    printf("==================================\n");
    printf("\n---------Brancas Jogam e4---------\n");
    mostrar();
    moverPeca(1,5,3,5);
    printf("\n---------Pretas Jogam e5---------\n");
    mostrar();

    //  ---------------- 2° JOGADA
    moverPeca(7,6,4,3);
    printf("\n==================================\n");
    printf("             Jogada #2\n");
    printf("==================================\n");
    printf("\n---------Brancas Jogam Bc4---------\n");
    mostrar();
    moverPeca(0,2,2,3);
    printf("\n---------Pretas Jogam Cc6---------\n");
    mostrar();

    //  ---------------- 3° JOGADA
    moverPeca(7,4,3,8);
    printf("\n==================================\n");
    printf("             Jogada #3\n");
    printf("==================================\n");
    printf("\n---------Brancas Jogam Dh5---------\n");
    mostrar();
    moverPeca(0,7,2,6);
    printf("\n---------Pretas Jogam Cf6---------\n");
    mostrar();
    
    //  ---------------- 4° JOGADA - LANCE FINAL
    moverPeca(3,8,1,6);
    printf("\n==================================\n");
    printf("       Jogada #4 (Xeque Mate)\n");
    printf("==================================\n");
    printf("\n---------Brancas Capturam Peao PP6 em f7 e Xeque Mate (Dxf7#)---------\n");
    mostrar();

    return 0;
}