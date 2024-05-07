// Cálculo do volume de uma esfera de acordo com a fórmula
#include <stdio.h>

int main(){
    double r, volume;
    double pi = 3.14159;
    scanf("%lf", &r);
    volume = (r * r * r) * (4.0/3 * pi) ;
    // usamos 4.0 porque se não será assumido resultado da divisão de inteiros como inteiro. o que muda o resultado final
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}