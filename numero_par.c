//Imprime todos os números pares dentro do intervalo (0,100]
#include <stdio.h>

int main(){

    for(int i = 1; i <= 100; i++){
        int par = i;
        if(i % 2 == 0)
            printf("%d\n", par);
    }

    return 0;
}