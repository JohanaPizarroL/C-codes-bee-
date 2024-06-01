// Calcula o total de produtos de acordo com seu codigo, preço e quantidade
#include <stdio.h>

int main(){
    int cod, num;
    double total;
    scanf("%d %d", &cod, &num);

    switch(cod){
        case 1:
            total = 4.00 * num;
        break;
        case 2:
            total = 4.50 * num;
        break;
        case 3:
            total = 5.00 * num;
        break;
        case 4:
            total = 2.00 * num;
        break;
        case 5:
            total = 1.50 * num;
        break;
    }

    printf("Total: R$ %.2lf\n", total);

    return 0;
}