//consumo

#include <stdio.h>

int main(){
    double distancia, combustivel, consumo;
    scanf("%lf %lf", &distancia, &combustivel);
    consumo = distancia / combustivel;

    printf("%.3lf km/l\n", consumo);

    return 0;
}
