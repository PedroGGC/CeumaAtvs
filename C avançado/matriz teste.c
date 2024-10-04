#include <stdio.h>

int main() {

    int matriz [2][2];

    for (int i = 0; i < 2; i++){
      for (int j = 0; j < 2; j++)  {

        printf("insira os valores da matriz:\n");
        scanf("%d", &matriz[i][j]);
      }
    }

 for (int i = 0; i < 2; i++){
      for (int j = 0; j < 2; j++)  {

        printf("os valores sao:\n linha: %d coluna: %d valor: %d\n", j, i, matriz[i][j]);
      }
 }
}