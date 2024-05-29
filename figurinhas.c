//calculo do mdc de dois valores
#include <stdio.h>

int main(){
    int num; 
    int n1, n2; 

    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d %d", &n1, &n2);
        while(n2 != 0){
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    } 
    printf("%d\n", n1);
    }

    return 0;   
}