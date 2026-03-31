#include <stdio.h>

int main() {
    
    float valor;
    
    printf("digite o valor:");
    scanf("%f",&valor);
    
    if ((valor>=10)&&(valor<=50)){
        printf("seu valor esta entre 10 e 50");
    }
    else {
        printf("o valor nao esta entre 10 e 50");
    }
    
    return 0;
}