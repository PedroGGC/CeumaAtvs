/*Segunda atividade*/
#include <stdio.h>

#define MAX 50

int main() {
    int linhas, colunas, i, j;
    int matriz[MAX][MAX];
    float soma = 0, media;
    int count = 0;
    int valor;

    // Leitura do número de linhas e colunas com validação
    do {
        printf("Informe o numero de linhas (maximo 50): ");
        scanf("%d", &linhas);
        printf("Informe o numero de colunas (maximo 50): ");
        scanf("%d", &colunas);

        if (linhas > MAX || colunas > MAX) {
            printf("Erro: o numero de linhas e colunas deve ser no maximo 50. Tente novamente.\n");
        }
    } while (linhas > MAX || colunas > MAX);

    // Leitura dos elementos da matriz
    printf("Informe os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da média da diagonal principal
    int menor_dimensao = linhas < colunas ? linhas : colunas;
    for (i = 0; i < menor_dimensao; i++) {
        soma += matriz[i][i];
    }
    media = soma / menor_dimensao;

    printf("A media dos elementos da diagonal principal e: %.2f\n", media);

    // Leitura do valor para comparação
    printf("Informe um valor para comparar: ");
    scanf("%d", &valor);

    // Verificar quais elementos são maiores que o valor informado
    printf("Elementos maiores que %d:\n", valor);
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] > valor) {
                printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
                count++;
            }
        }
    }

    if (count == 0) {
        printf("Nenhum elemento maior que %d foi encontrado.\n", valor);
    }

    return 0;
}
