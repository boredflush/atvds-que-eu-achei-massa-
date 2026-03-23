#include <stdio.h>

int main()
{
    float valor_da_hora;
    int horas_trabalhadas;

    printf("digite o total de horas trabalhadas");
    scanf("%d",&horas_trabalhadas);
    
    printf("digite o valor da hora");
    scanf("%f",&valor_da_hora);
    
    printf("o seu salario obtido nas horas trabalhadas foi R$:%f",horas_trabalhadas*valor_da_hora);
    
    
    return 0;
}