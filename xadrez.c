#include <stdio.h>

int main() {

    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    int i;

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

    return 0;
}
