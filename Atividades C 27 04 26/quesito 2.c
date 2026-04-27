// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
   int valor, i=1;
   
   printf("digite o valor");
   scanf("%d",&valor);
   
   while (i<=10){
       printf("seu valor é: %d \n", valor*i);
       i++;
   }
   
    return 0;
}