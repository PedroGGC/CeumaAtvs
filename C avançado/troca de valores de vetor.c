# include <stdio.h>

int main (){

    int vetor[2];
int temp;
    for (int i = 0; i < 2; i++){
            printf("insira os valores do vetor\n");
         scanf("%d", &vetor[i]);
    }

 printf("Valores antes da troca:\n");
    for (int i = 0; i < 2; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    
temp = vetor[0];
vetor [0] = vetor [1];
vetor[1] = temp;

 printf("Valores após a troca:\n");
    for (int i = 0; i < 2; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}