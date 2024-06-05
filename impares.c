// imprime os números impares desde 1 até o número indicado na entrada

#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    for(int i = 1; i <= x; i += 2){
        //if(x % 2 == 1){
            printf("%d\n", i);
       // }
    }

    return 0;
}