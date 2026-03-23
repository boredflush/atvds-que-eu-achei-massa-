#include <stdio.h>

int main()
{
    float valor,valor_final;
    int percentual;
    
    printf("digite o valor");
    scanf("%f",&valor);
    
    printf("digite o percentual de desconto");
    scanf("%i",&percentual);
    
    valor_final=valor-(valor*percentual)/100;
    
    printf("o valor que devera ser pago é %f",valor_final);
    
    
    
    
    
    
    return 0;
}