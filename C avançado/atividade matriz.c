#include <stdio.h>
#define tamanho 3
int main(){

    float matriz [tamanho][tamanho], menor10 = 0, soma =0;

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){

            printf("insira os valores da matriz %d %d: ", i, j);
            scanf("%f", &matriz[i][j]);
            if (matriz [i][j] < 10)
            {
                menor10++;
            }
            if (matriz [i][j] < 0)
            {
                soma += matriz [i][j];
            }

        }
    }

//valores da diagonal principal

printf("\nValores da diagonal principal:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f\n", matriz[i][i]);
    }


    printf("quantidade de numeros inferiores a 10: %.2f\n", menor10);
    printf("a soma dos valores negativos e: %.2f", soma);
}