#include <stdio.h>

int main() {
    
    float salario;
    
    printf("digite o salario:");
    scanf("%f",&salario);
    
    if(salario<1000){
        
        printf("o valor pos o aumento sera %f",salario*1.10);
    }
    else if(salario>1000){
        
        printf("o valor pos o aumento sera %f",salario*1.05);
    }

    return 0;
}