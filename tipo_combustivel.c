#include <stdio.h>

int main(){

    int n, um = 0, dois = 0, tres = 0, fim;

    do{
        scanf("%d", &n);
        if (n >= 1 && n <= 4) {
            switch(n){
                case 1:
                    um++;
                    break;
                case 2:
                    dois++;
                    break;
                case 3:
                    tres++;
                    break;
                case 4:
                    break;
            }
        }

    }while(n != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", um);
    printf("Gasolina: %d\n", dois);
    printf("Diesel: %d\n", tres);


    return 0;
}


