#include <stdio.h>

int main(){
    double a, b, c, area_t, area_c, area_trap, area_q, area_r;

    double pi = 3.14159;
    //leitura de valores
    scanf("%lf %lf %lf", &a, &b, &c);

    area_t = (a * c) / 2; // altura = c, base = a
    area_c = (c * c) * pi; // area do circulo de raio = c
    area_trap = (a+b)*(c/2); // area trapezio
    area_q = b * b; // area quadrado
    area_r = a * b; // area retangulo, base*altura

    printf("TRIANGULO: %.3lf\n", area_t);
    printf("CIRCULO: %.3lf\n", area_c);
    printf("TRAPEZIO: %.3lf\n", area_trap);
    printf("QUADRADO: %.3lf\n", area_q);
    printf("RETANGULO: %.3lf\n", area_r);

    return 0;
}