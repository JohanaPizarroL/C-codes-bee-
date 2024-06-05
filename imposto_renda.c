// calcula o imposto de renda de acordo com o salário
#include <stdio.h>

int main(){
    double salario, imposto;
    scanf("%lf", &salario);

    if(salario >= 0 && salario <= 2000.00){
        printf("Isento\n");
        return(0);
    } else if (salario <= 3000.00) {
        imposto = (salario - 2000.00) * 0.08;
    } else if (salario <= 4500.00) {
        imposto = 80.00 + (salario - 3000.00) * 0.18;
    } else {
        imposto = 80.00 + 270.00 + (salario - 4500.00) * 0.28;
    }

    printf("R$ %.2lf\n", imposto);

    return 0;
}