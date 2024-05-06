// Cálculo da media aritmética

#include <stdio.h>

int main(){

    double a, b, media;
    printf("Digite a primeira nota: ");
    scanf("%lf", &a);
    printf("Digite a segunda nota: ");
    scanf("%lf", &b);
    media = (a + b) / 2;
    printf("A media da suas provas é: %lf", media);

    return 0;
}