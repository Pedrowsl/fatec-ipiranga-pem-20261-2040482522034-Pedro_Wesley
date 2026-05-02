/*--------------------------------------------------------------*
*                      FATEC Ipiranga                           *
*       Disciplina: Programaçao Estruturada e Modular           *
*                   Prof. Carlos Veríssimo                      *
*---------------------------------------------------------------*
* Objetivo do Programa: Coversão de recursivo para interativo.  *
* Data - 01/05/2026                                             * 
* Autor: Pedro Wesley                                           *
*---------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_PASTAS 50
#define LIMITE_ALERTA 300.0

typedef struct {
    char nome[50];
    float tamanho_proprio;
    float tamanho_total;
    int subpastas_indices[10];
    int qtd_sub;
} Pasta;

typedef struct {
    int index;
    int nivel;
    int visitado;
} ItemPilha;

Pasta drive[MAX_PASTAS];
int ciclos = 0;

void processarHierarquiaIterativo(int raiz, int limite_profundidade) {
    ItemPilha pilha[100];
    int topo = -1;

    topo++;
    pilha[topo].index = raiz;
    pilha[topo].nivel = 0;
    pilha[topo].visitado = 0;

    while (topo >= 0) {
        ciclos++;

        ItemPilha atual = pilha[topo];
        topo--;

        if (atual.index == -1 || atual.nivel > limite_profundidade) {
            continue;
        }

        if (atual.visitado == 0) {
            topo++;
            pilha[topo].index = atual.index;
            pilha[topo].nivel = atual.nivel;
            pilha[topo].visitado = 1;

            for (int i = 0; i < drive[atual.index].qtd_sub; i++) {
                int filho_idx = drive[atual.index].subpastas_indices[i];

                topo++;
                pilha[topo].index = filho_idx;
                pilha[topo].nivel = atual.nivel + 1;
                pilha[topo].visitado = 0;
            }
        } else {
            drive[atual.index].tamanho_total = drive[atual.index].tamanho_proprio;

            for (int i = 0; i < drive[atual.index].qtd_sub; i++) {
                int filho_idx = drive[atual.index].subpastas_indices[i];

                if (atual.nivel + 1 <= limite_profundidade) {
                    drive[atual.index].tamanho_total += drive[filho_idx].tamanho_total;
                }
            }

            for (int i = 0; i < atual.nivel; i++) {
                printf("  ");
            }

            printf("|-- %s [%.2f GB]", drive[atual.index].nome, drive[atual.index].tamanho_total);

            if (drive[atual.index].tamanho_total > LIMITE_ALERTA) {
                printf(" [!] ALERTA: GARGALO DETECTADO");
            }

            printf("\n");
        }
    }
}

int main() {
    clock_t t;

    strcpy(drive[0].nome, "RAIZ");
    drive[0].tamanho_proprio = 10.0;
    drive[0].qtd_sub = 2;
    drive[0].subpastas_indices[0] = 1;
    drive[0].subpastas_indices[1] = 2;

    strcpy(drive[1].nome, "Projetos_TI");
    drive[1].tamanho_proprio = 50.0;
    drive[1].qtd_sub = 1;
    drive[1].subpastas_indices[0] = 3;

    strcpy(drive[2].nome, "Backups_Antigos");
    drive[2].tamanho_proprio = 350.0;
    drive[2].qtd_sub = 0;

    strcpy(drive[3].nome, "Videos_Aulas");
    drive[3].tamanho_proprio = 280.0;
    drive[3].qtd_sub = 0;

    int limite;

    printf("Defina o limite de profundidade do mergulho: ");
    scanf("%d", &limite);

    t = clock();

    printf("\n--- RELATORIO DE HIERARQUIA INTELIGENTE ---\n");
    processarHierarquiaIterativo(0, limite);
    printf("-------------------------------------------\n");

    t = clock() - t;

    double tempo_execucao = ((double)t) / CLOCKS_PER_SEC;

    printf("\nQuantidade de ciclos processados: %d", ciclos);
    printf("\nTempo de execucao: %f segundos\n", tempo_execucao);

    return 0;
}