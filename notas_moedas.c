//calculo do número de notas e moedas de um certo valor
#include <stdio.h>
#include <math.h>

int main(){
    double valor;
    int cem, cinquenta, vinte, dez, cinco, dois, um,cinq_c, vinte_c, dez_c, cinco_c, um_c;

    scanf("%lf", &valor);

    if (valor < 1000000 && valor > 0){
        cem = (int)(valor / 100);
        valor = fmod(valor, 100);

        cinquenta = (int)(valor / 50);
        valor = fmod(valor, 50);

        vinte = (int)(valor / 20);
        valor = fmod(valor, 20);

        dez = (int)(valor / 10);
        valor = fmod(valor, 10);

        cinco = (int)(valor / 5);
        valor = fmod(valor, 5);

        dois = (int)(valor / 2);
        valor = fmod(valor, 2);

        um = (int)(valor / 1);
        valor = fmod(valor, 1);

        valor = valor * 100; //pra tratar mais facilmente
        cinq_c = (int)(valor / 50);
        valor = fmod(valor, 50);

        vinte_c = (int)(valor / 25);
        valor = fmod(valor, 25);

        dez_c = (int)(valor / 10);
        valor = fmod(valor, 10);

        cinco_c = (int)(valor / 5);
        valor = fmod(valor, 5);

        um_c = (int)(valor / 1);

    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", cinq_c);
    printf("%d moeda(s) de R$ 0.25\n", vinte_c);
    printf("%d moeda(s) de R$ 0.10\n", dez_c);
    printf("%d moeda(s) de R$ 0.05\n", cinco_c);
    printf("%d moeda(s) de R$ 0.01\n", um_c);

    return 0;
}