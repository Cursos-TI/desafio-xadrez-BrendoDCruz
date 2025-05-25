#include <stdio.h>

void torre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    torre(casas - 1);
}

void rainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    rainha(casas - 1);
}

void bispo(int vertical, int horizontal) {
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            if (i == j) {
                printf("Cima\n");
                printf("Direita\n");
            }
        }
    }
}

void cavalo(int movimentos) {
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < movimentos; i++) {
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
        printf("---\n");
    }
}

int main() {
    int qtdeTorre = 5;
    int verticalBispo = 5;
    int horizontalBispo = 5;
    int qtdeRainha = 8;
    int qtdeCavalo = 3;

    printf("Movimento da Torre:\n");
    torre(qtdeTorre);

    printf("\nMovimento do Bispo:\n");
    bispo(verticalBispo, horizontalBispo);

    printf("\nMovimento da Rainha:\n");
    rainha(qtdeRainha);

    printf("\n");
    cavalo(qtdeCavalo);

    return 0;
}
