// Online C compiler to run C program online
#include <stdio.h>

int main() {

int num,impar=0,cont=1;
    
 for(cont=1;cont<=5;cont++){

        printf("digite 50 numeros");
        scanf("%d",&num);
 
    if(num % 2 != 0 && num >= 100 && num <= 200){
     
      impar+=num;
        
    
 }
 }
   printf("a soma dos impares foi: %d",impar);

    
    
   
    return 0;
}