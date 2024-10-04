#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 3

int main() {
    // Ponteiro genérico para o vetor
    void *ponteiro = malloc(TAMANHO * sizeof(int));
    
    // Verificando se a alocação foi bem-sucedida
    if (!ponteiro) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    
    int *vetor = (int *)ponteiro; // Conversão do ponteiro genérico para inteiro
    int positivos = 0, negativos = 0; // Contadores

    // Entrada de dados e cálculo simultâneo
    printf("Informe %d valores inteiros:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &vetor[i]);
        if (vetor[i] < 0) {
            negativos++;
        }else {
            positivos++;
            }
        
    }
    
    // Exibindo os percentuais
    printf("\nPercentual de positivos (incluindo 0): %.2f%%\n", (positivos / (float)TAMANHO) * 100);
    printf("Percentual de negativos: %.2f%%\n", (negativos / (float)TAMANHO) * 100);
    
    free(ponteiro); // Liberando memória
    return 0;
}
