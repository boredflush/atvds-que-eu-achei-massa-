/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int valor1,valor2,produto = 0;


    printf("digite o primeiro numero:");
    scanf("%d",&valor1);



    printf("digite o segundo numero:");
    scanf("%d",&valor2);


    while(valor2 > 0) {
        
        produto=produto+valor1;
        
        valor2=valor2-1;
    }

    printf("o produto é: %d", produto);

    return 0;
}