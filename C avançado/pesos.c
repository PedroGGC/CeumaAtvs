#include <stdio.h>

#define PESSOAS 3
#define MESES 3

int main() {
    float peso[PESSOAS][MESES], media;
    int i, j, acimaPeso = 0;

    for (i = 0; i < PESSOAS; i++) {
        media = 0;
        for (j = 0; j < MESES; j++) {
            do {
                printf("Peso pessoa %d mes %d (30-300kg): ", i + 1, j + 1);
                scanf("%f", &peso[i][j]);
            } while (peso[i][j] < 30 || peso[i][j] > 300);
            media += peso[i][j];
        }
        media /= MESES;
        printf("Media pessoa %d: %.2f kg\n", i + 1, media);
        if (media >= 80) acimaPeso++;
    }

    printf("Pessoas com media de peso >= 80kg: %d\n", acimaPeso);

    return 0;
}
