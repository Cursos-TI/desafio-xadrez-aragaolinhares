#include <stdio.h>

// =========================
// Funções Recursivas
// =========================
void moverTorreRec(int passos) {
    if (passos == 0) return;
    printf("♜ Direita\n");
    moverTorreRec(passos - 1);
}

void moverBispoRec(int passos) {
    if (passos == 0) return;
    printf("♝ Cima Direita\n");
    moverBispoRec(passos - 1);
}

void moverRainhaRec(int passos) {
    if (passos == 0) return;
    printf("♛ Esquerda\n");
    moverRainhaRec(passos - 1);
}

// =========================
// Funções com Loops
// =========================
void moverTorreLoop(int passos) {
    for (int i = 0; i < passos; i++) {
        printf("♜ Direita\n");
    }
}

void moverBispoLoop(int passos) {
    for (int i = 0; i < passos; i++) {
        printf("♝ Cima Direita\n");
    }
}

void moverRainhaLoop(int passos) {
    for (int i = 0; i < passos; i++) {
        printf("♛ Esquerda\n");
    }
}

// Cavalo em L (2 casas baixo, 1 esquerda) usando for + while
void moverCavaloLoop() {
    for (int i = 0; i < 2; i++) {
        printf("♞ Baixo\n");
    }
    int j = 0;
    while (j < 1) {
        printf("♞ Esquerda\n");
        j++;
    }
}

// Cavalo em L (2 cima, 1 direita) usando for complexo
void moverCavaloAvancado() {
    for (int x = 0, y = 0; x < 2 || y < 1; ) {
        if (x < 2) {
            printf("♞ Cima\n");
            x++;
            continue;
        }
        if (y < 1) {
            printf("♞ Direita\n");
            y++;
        } else {
            break;
        }
    }
}

// =========================
// Programa principal
// =========================
int main() {
    printf("=== Pecas de Xadrez ===\n");
    printf("Torre:  ♜\n");
    printf("Bispo:  ♝\n");
    printf("Rainha: ♛\n");
    printf("Cavalo: ♞\n\n");

    // Torre
    printf("=== Torre (loop) ===\n");
    moverTorreLoop(5);

    printf("\n=== Torre (recursivo) ===\n");
    moverTorreRec(5);

    // Bispo
    printf("\n=== Bispo (loop) ===\n");
    moverBispoLoop(5);

    printf("\n=== Bispo (recursivo) ===\n");
    moverBispoRec(5);

    // Rainha
    printf("\n=== Rainha (loop) ===\n");
    moverRainhaLoop(8);

    printf("\n=== Rainha (recursivo) ===\n");
    moverRainhaRec(8);

    // Cavalo
    printf("\n=== Cavalo (loop simples) ===\n");
    moverCavaloLoop();

    printf("\n=== Cavalo (loop avancado) ===\n");
    moverCavaloAvancado();

    return 0;
}
