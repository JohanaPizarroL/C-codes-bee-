//Verifica se um número é positivo ou não
#include <stdio.h>

int main(){
    double x;
    int positivo = 0;
    for(int i = 0; i < 6; i++){
        scanf("%lf", &x);
        if (x > 0){
            positivo++;
        }
    }
    printf("%d valores positivos\n", positivo);
    return 0;
}