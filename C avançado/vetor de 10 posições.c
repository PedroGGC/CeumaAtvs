# include <stdio.h>
# define numero 6
int main(){

int vetor[numero];
int par = 0;
int i;
int soma = 0;
int media = 0;

for ( i = 0; i < numero; i++)
{
    printf("insira os valores do vetor\n");
    scanf("%d", &vetor[i]);
}

 printf("números digitados foram:\n");
    for ( i = 0; i < numero; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    printf("Os numeros pares sao\n");
    for (i = 0; i < numero; i++) {

        if (vetor[i] % 2 == 0)
        {
             par += 1;
             printf("vetor[%d] = %d\n", i, vetor[i]);
        }
        
    }
     printf("quantidade de pares:  %d\n",par);

     printf("a media dos valores presentes no vetor e:\n");

        for (i = 0; i < numero; i++){

             soma += vetor[i];
           media = soma / numero;
        }

        printf("%d", media);
return 0;

}