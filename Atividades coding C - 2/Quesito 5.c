#include <stdio.h>

int main()
{
    float base,altura,resultado;
    
    printf("digite o valor da base");
    scanf("%f", &base);
    
    printf("digite o valor da altura");
    scanf("%f", &altura);
    
    resultado=base*altura;

    printf("a área do retangulo é %f \n",resultado);
    
    return 0;
}