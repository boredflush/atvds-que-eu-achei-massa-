#include <stdio.h>

int main() {
    
    float valor1,valor2,valor3;
        
    printf("digite valor1:");
    scanf("%f",&valor1);
    
    printf("digite valor2:");
    scanf("%f",&valor2);
    
    printf("digite valor3:");
    scanf("%f",&valor3);
    
    if (valor1 == valor2 && valor2 == valor3){

        printf("todos valores sao iguais");
    }
    else if (valor1 == valor2|| valor1 == valor3|| valor2 == valor3){ 
        printf("2 numeros sao iguais");
}
 else{
     printf("nenuhum numero igual");
 }
 
    return 0;
}