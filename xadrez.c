#include <stdio.h>

int main() {
    // ================================
    // CONSTANTES DE MOVIMENTO
    // ================================
    const int MOV_BISPO = 5;       // Movimento do Bispo
    const int MOV_TORRE = 5;       // Movimento da Torre
    const int MOV_RAINHA = 8;      // Movimento da Rainha
    const int MOV_CAVALO_VERT = 2; // Cavalo: movimento vertical (baixo)
    const int MOV_CAVALO_HOR = 1;  // Cavalo: movimento horizontal (esquerda)

    int i; // contador genérico

    // ================================
    // NIVEL NOVATO
    // ================================

    // BISPO (while)
    printf("=== Movimento do Bispo (while) ===\n");
    i = 1;
    while (i <= MOV_BISPO) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // TORRE (for)
    printf("=== Movimento da Torre (for) ===\n");
    for (i = 1; i <= MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // RAINHA (do-while)
    printf("=== Movimento da Rainha (do-while) ===\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= MOV_RAINHA);
    printf("\n");

    // ================================
    // NIVEL AVENTUREIRO
    // ================================

    // CAVALO: movimento em L (2 Baixo + 1 Esquerda)
    printf("=== Movimento do Cavalo (for + while) ===\n");

    // Parte 1: descendo (for)
    for (i = 1; i <= MOV_CAVALO_VERT; i++) {
        printf("Baixo\n");
    }

    // Parte 2: indo para a esquerda (while)
    i = 1;
    while (i <= MOV_CAVALO_HOR) {
        printf("Esquerda\n");
        i++;
    }

    // ================================
    // FIM DO PROGRAMA
    // ================================
    return 0;
}
