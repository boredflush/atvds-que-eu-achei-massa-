/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){

int n,fat=1,i;
    
printf("Digite o numero: ");
scanf("%d",&n);
for(i=1;i<=n;i++)fat*=i;
printf("o valor fatorial é: %d",fat);
return 0;
}
