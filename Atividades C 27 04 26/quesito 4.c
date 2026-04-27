// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int num, i=1, soma=0;
     
    do{
   printf("digite o valor:");
  scanf("%d",&num);
   i++;
   soma+=num;
    }while (num !=0); 
    
    printf("Aqui está a soma de todos: %d",soma);
    
    
    return 0;
}