// Calcular a área de um circulo

#include <stdio.h>
 
int main(){

    double pi = 3.14159;
    double r;
    scanf("%lf", &r);

    double area = (r * r) * pi;
    printf("A=%.4lf\n", area);
    // com float não dava tão certo pq ele aredondava o resultado
    // double tem mais precisão no cálculo do resultado

    return 0;
}