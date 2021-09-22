#include <stdio.h>

/* Preencha uma matriz 3x3 e mostre a
quantidade de números pares digitados. */

int main() {
    int linha, coluna, pares, numeros[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    pares = 0;
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("Posição: [%d] [%d] = %d \n", linha, coluna, numeros[linha][coluna]);
            if (numeros[linha][coluna] % 2 == 0) {
                pares = pares + 1;
            }
        }
    }
    printf("Quantidade total de números pares: %d", pares);
}

