#include <stdio.h>

void moverTorre(int passo, int total) {
    if (passo > total) return;
    printf("Direita\n");
    moverTorre(passo + 1, total);
}

void moverRainha(int passo, int total) {
    if (passo > total) return;
    printf("Esquerda\n");
    moverRainha(passo + 1, total);
}

void moverBispo(int passo, int total) {
    if (passo > total) return;
    for (int v = 0; v < 1; v++) {
        for (int h = 0; h < 1; h++) {
            printf("Cima, Direita\n");
        }
    }
    moverBispo(passo + 1, total);
}

int main() {
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    printf("=== MOVIMENTO DA TORRE ===\n");
    moverTorre(1, movimentoTorre);

    printf("-----------------------------------------------\n");
    printf("=== MOVIMENTO DO BISPO ===\n");
    moverBispo(1, movimentoBispo);

    printf("-----------------------------------------------\n");
    printf("=== MOVIMENTO DA RAINHA ===\n");
    moverRainha(1, movimentoRainha);

    printf("-----------------------------------------------\n");
    printf("=== MOVIMENTO DO CAVALO ===\n\n");

    int movimentosCima = 2;
    int movimentosDireita = 1;

    for (int i = 0, j = 0; i < movimentosCima || j < movimentosDireita; ) {
        if (i < movimentosCima) {
            printf("Cima\n");
            i++;
            continue;
        }
        if (j < movimentosDireita) {
            printf("Direita\n");
            j++;
        }
        if (i >= movimentosCima && j >= movimentosDireita) {
            break;
        }
    }

    printf("-----------------------------------------------\n");
    printf("SIMULAÇÃO DE MOVIMENTOS CONCLUÍDA!\n");

    return 0;
}