
#include <stdio.h>

int main()
{
    float numero;
    
    printf("digite o valor:");
    scanf("%f",&numero);
    
    if  (numero >=1){
    printf("o numero é positivo");
    }
    
    else if (numero <0){
    printf("o numero é negativo");  
    }
    
    else if (numero ==0){
        printf("o numero é zero");
    }
    
    
    return 0;
}