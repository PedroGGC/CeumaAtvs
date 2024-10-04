#include <stdio.h>

#define SIZE 20

int main() {
    int matrizPares[SIZE][SIZE], matrizImpares[SIZE][SIZE], matrizResultado[SIZE][SIZE];
    int valorPar = 0, valorImpar = 1;
    int identidade = 1; // Inicializa como matriz identidade (supondo que seja)

    // Preenche as matrizes pares e ímpares e calcula a subtração
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrizPares[i][j] = valorPar;
            matrizImpares[i][j] = valorImpar;
            matrizResultado[i][j] = matrizPares[i][j] - matrizImpares[i][j];

            // Verifica se a matriz resultante é identidade
            if ((i == j && matrizResultado[i][j] != 1) || (i != j && matrizResultado[i][j] != 0)) {
                identidade = 0;
            }

            valorPar += 2;
            valorImpar += 2;
        }
    }

    // Exibe a matriz resultado da subtração
    printf("Matriz resultado da subtracao:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrizResultado[i][j]);
        }
    }

    // Exibe o resultado da verificação
    if (identidade) {
        printf("\nA matriz resultado e uma matriz identidade.\n");
    } else {
        printf("\nA matriz resultado nao e uma matriz identidade.\n");
    }

    return 0;
}
