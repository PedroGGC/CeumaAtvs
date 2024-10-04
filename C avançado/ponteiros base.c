#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, *px, *py;
    
    x = 9;
    px = &x;   // px aponta para x
    py = px;   // py aponta para o mesmo endereço que px (ou seja, para x)
    
    printf("x = %d\n", x);            // imprime o valor de x (9)
    printf("&x = %p\n", (void*)&x);   // imprime o endereço de x
    printf("&px = %p\n", (void*)&px); // imprime o endereço de px
    printf("px = %p\n", (void*)px);   // imprime o endereço contido em px (endereço de x)
    printf("*px = %d\n", *px);        // imprime o valor apontado por px (valor de x, que é 9)
    printf("*py = %d\n", *py);        // imprime o valor apontado por py (valor de x, que é 9)
    
    system("pause");  // para o sistema, útil no Windows para segurar a janela aberta
    
    return 0;
}
