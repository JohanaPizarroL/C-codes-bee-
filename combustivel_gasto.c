// calculando a quantidade de gasolina é gasta neste carro que usa aprox 12KM/L.

#include <stdio.h>

int main(){
    int tempo, velocidade;
    scanf("%d %d", &tempo, &velocidade);
    double combustivel = (tempo * velocidade) / 12.0;
    printf("%.3lf\n", combustivel);

    return 0;
}