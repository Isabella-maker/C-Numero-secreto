#include <stdio.h>

int main() {
    int numero_secreto = 37; // número definido pelo programador
    int tentativa;
    int contador = 0;

    printf("=== Jogo de Adivinhacao ===\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &tentativa);
        contador++;

        if (tentativa > numero_secreto) {
            printf("Muito alto!\n");
        } else if (tentativa < numero_secreto) {
            printf("Muito baixo!\n");
        } else {
            printf("Parabens! Voce acertou!\n");
        }

    } while (tentativa != numero_secreto);

    printf("Voce precisou de %d tentativas.\n", contador);

    return 0;
}