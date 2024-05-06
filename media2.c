// Calcular a media de 3 valores com pesos diferentes

#include <stdio.h>

int main(){
    double A, B, C, media;
    scanf("%lf %lf %lf", &A, &B, &C);
    media = ((A * 2) + (B * 3) + (C * 5)) / 10;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}
