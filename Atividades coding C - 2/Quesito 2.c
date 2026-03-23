#include <stdio.h>

int main()
{
    int valor1, valor2, valor3;
    float resultado;
    
    printf("digite o valor 1:");
    scanf("%d",&valor1);
    
    printf("digite o valor 2:");
    scanf("%d",&valor2);
    
     printf("digite o valor 3:");
    scanf("%d",&valor3);
    
    resultado=(valor1+valor2+valor3)/3;
    
    
    printf("o valor da media aritmetica é: %f",resultado);
    
    
    
    return 0;
}