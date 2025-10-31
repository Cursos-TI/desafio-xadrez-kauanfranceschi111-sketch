#include <stdio.h>

int main() {
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;
    int i;

    printf("=== MOVIMENTO DA TORRE ===\n");
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("-----------------------------------------------\n");
    printf("=== MOVIMENTO DO BISPO ===\n");
    i = 1;
    while (i <= movimentoBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("-----------------------------------------------\n");
    printf("=== MOVIMENTO DA RAINHA ===\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= movimentoRainha);
    
    printf("-----------------------------------------------\n");
    printf("=== MOVIMENTO DO CAVALO ===\n\n");

    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    for (i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
        int j = 0;
        while (j < movimentosEsquerda) {
            if (i == movimentosBaixo - 1) {
                printf("Esquerda\n");
            }
            j++;
        }
    }

    printf("-----------------------------------------------\n");
    printf("SIMULAÇÃO DE MOVIMENTOS CONCLUÍDA!\n");

    return 0;
}

