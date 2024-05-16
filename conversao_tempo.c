//conversao de tempo para horas, minutos, segundos
#include <stdio.h>

int main(){
    int n, horas, minutos, segundos;
    scanf("%d", &n);
    //dividindo pela quantidade de segundos
    horas = n / 3600; 
    n = (n % 3600);
    minutos = n / 60;
    segundos = n % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}