// Diferença simples de números de acordo com a especificaçãp -> DIFERENCA = (A * B - C * D)

#include <stdio.h>

int main(){
    int A, B, C, D, dif;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    dif = (A * B - C * D);
    printf("DIFERENCA = %d\n", dif);
    return 0;
}