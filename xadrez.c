#include <stdio.h>

int main() {

    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    int baixo = 2;
    int esquerda = 1;
    int cavalo = 3;

    int i, j;

    printf("Movimento da Torre:\n");
    for (i = 0; i < torre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    i = 0;
    while (i < bispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < rainha);

    printf("\nMovimento do Cavalo:\n");
    for (i = 0; i < cavalo; i++) {
        j = 0;
        while (j < baixo) {
            printf("Baixo\n");
            j++;
        }

        j = 0;
        while (j < esquerda) {
            printf("Esquerda\n");
            j++;
        }

        printf("---\n");
    }

    return 0;
}
