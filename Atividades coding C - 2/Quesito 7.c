#include <stdio.h>

int main()
{
    float medida;
    
    printf("digite o valor em metros:");
    scanf("%f",&medida);
    
    printf("este é o valor em centimetros: %f \n e este em milimetros: %f",medida*100,medida*1000);
    return 0;
}