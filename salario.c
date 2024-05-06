// Salário de um funcionário

#include <stdio.h>

int main(){
    int num, horas;
    double valor, salario;
    scanf("%d %d %lf", &num, &horas, &valor);
    salario = horas * valor;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, salario);
}

/* DESCRIÇÃO
Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
*/