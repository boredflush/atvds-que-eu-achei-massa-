/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float distancia_percorrida,combustivel;
    
    printf("digite a distancia percorrida em KM:");
    scanf("%f",&distancia_percorrida);
    
    printf("digite o combustivel gasto em LITROS");
    scanf("%f",&combustivel);
    
    printf("o consumo medio foi: %f",distancia_percorrida/combustivel);
    
    return 0
}
