#include <stdio.h>

int main() {
    // ----------------------------
    // Movimento da TORRE - FOR
    // ----------------------------
    // A Torre se move em linha reta. Aqui vamos mover 5 casas para a Direita.
    int i;
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ----------------------------
    // Movimento do BISPO - WHILE
    // ----------------------------
    // O Bispo se move na diagonal. Vamos mover 5 casas na diagonal para Cima Direita.
    int j = 0;
    printf("Movimento do Bispo:\n");
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // ----------------------------
    // Movimento da RAINHA - DO-WHILE
    // ----------------------------
    // A Rainha se move em todas as direções. Aqui vamos mover 8 casas para a Esquerda.
    int k = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}