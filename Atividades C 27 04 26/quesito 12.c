// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
   int valor=0,soma=0,i=0;
    
    printf("digite até qual valor quer adicionar:");
    scanf("%d",&valor);
    for(i = 1; i<=valor; i++){
        soma+=i;
        
    }
    printf("o valor somado é: %d",soma);
    
    return 0;
}