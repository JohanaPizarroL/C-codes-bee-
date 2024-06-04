//verifica se os tres pontos formam um triangulo

#include <stdio.h>

int main(){
    double a, b, c, perimetro, trapezio, t;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a + b > c && b + c > a && a + c > b){ //verificando se é um triangulo
        perimetro = a + b + c;
        printf("Perimetro = %.1lf\n", perimetro);
    } else{
        trapezio = ((a + b) * c) / 2;        
        printf("Area = %.1lf\n", trapezio);

    }
    
    return 0;
}


///        b + c == a || a + c == b
