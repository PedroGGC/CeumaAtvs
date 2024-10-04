# include <stdio.h>
# define tamanho 10


int main(){

int vetor[tamanho];
 float soma = 0;
 float media;

for (int i = 0; i < tamanho; i++){

    printf("insira as notas do aluno: ");
    scanf("%d", &vetor[i]);
soma += vetor[i];
}
media = soma/tamanho;
printf("a media do aluno foi: %.2f", media);
return 0;
}
