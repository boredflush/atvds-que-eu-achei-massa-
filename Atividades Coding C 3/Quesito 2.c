
#include <stdio.h>

int main()
{
    int peso;
    float altura,imc;
    
    printf("digite o peso:");
    scanf("%d",&peso);
    
    printf("digite a altura em cm:");
    scanf("%f",&altura);
    
    altura = altura / 100;
    imc= peso/(altura*altura);
    
 
    
    if (imc <18.5) {
    printf("abaixo do peso");
    }
    
    else if ((imc >=18.5)&&(imc<=25)){
    printf("peso normal");  
    }
    
    else if ((imc >=25)&&(imc<=30)){
    printf("acima do peso"); 
    }
    
     else if (imc> 30) {
    printf("obeso"); 
    }
    
    return 0;
}