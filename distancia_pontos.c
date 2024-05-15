//distancia entre dois pontos
#include <stdio.h>
#include <math.h>

int main(){
    double x1, x2, y1, y2, p1, p2, distancia;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    p1 = (x2 - x1) * (x2 - x1);
    p2 = (y2 - y1) * (y2 - y1);
    distancia = sqrt(p1 + p2);

    printf("%.4lf\n", distancia);

    return 0;
}