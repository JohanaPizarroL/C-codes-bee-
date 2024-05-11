// Calcular o número mínimo de cédulas

#include <stdio.h>

int main(){
    int valor, cem, cinquenta, vinte, dez, cinco, dois, um;
    scanf("%d", &valor);
    printf("%d\n", valor);
    if (valor < 1000000 && valor > 0){
        cem = valor / 100;
        valor = valor % 100; //atualiza valor com o resto
        cinquenta = valor / 50;
        valor = valor % 50;
        vinte = valor / 20;
        valor = valor % 20;
        dez = valor / 10;
        valor = valor % 10;
        cinco = valor / 5;
        valor = valor % 5;
        dois = valor / 2;
        um = valor % 2;

        printf("%d nota(s) de R$ 100,00\n", cem);
        printf("%d nota(s) de R$ 50,00\n", cinquenta);
        printf("%d nota(s) de R$ 20,00\n", vinte);
        printf("%d nota(s) de R$ 10,00\n", dez);
        printf("%d nota(s) de R$ 5,00\n", cinco);
        printf("%d nota(s) de R$ 2,00\n", dois);
        printf("%d nota(s) de R$ 1,00\n", um);
    }

    return 0;
}
