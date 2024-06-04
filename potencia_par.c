// Calcula a potencia de cada número par de 2 até n
#include <stdio.h>

int main(){
    int n, potencia;

    scanf("%d", &n);
    for(int i = 2; i <= n; i += 2){
            potencia = i * i;
            printf("%d^2 = %d\n", i, potencia);
    }

    //printf("bom,dai");

  return 0;
}
