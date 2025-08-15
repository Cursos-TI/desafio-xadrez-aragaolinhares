#include <stdio.h>

int main() {
    // ================================
    // CONSTANTES DE MOVIMENTO
    // ================================
    const int MOV_BISPO = 5;   // Quantidade de casas que o Bispo se move
    const int MOV_TORRE = 5;   // Quantidade de casas que a Torre se move
    const int MOV_RAINHA = 8;  // Quantidade de casas que a Rainha se move

    // Variável de controle para loops
    int i;

    // ================================
    // MOVIMENTO DO BISPO (while)
    // ================================
    // O bispo se move em diagonal (Cima + Direita)
    printf("=== Movimento do Bispo ===\n");
    i = 1;
    while (i <= MOV_BISPO) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // ================================
    // MOVIMENTO DA TORRE (for)
    // ================================
    // A torre se move em linha reta (Direita)
    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ================================
    // MOVIMENTO DA RAINHA (do-while)
    // ================================
    // A rainha pode se mover em qualquer direção, aqui: Esquerda
    printf("=== Movimento da Rainha ===\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= MOV_RAINHA);

    // ================================
    // FIM DO PROGRAMA
    // ================================
    return 0;
}
