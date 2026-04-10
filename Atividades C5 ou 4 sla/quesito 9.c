// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int valor,cont = 0,soma=0;
    float media;
    while(1) { 
        
        printf("digite o valor: ");
        scanf("%d", &valor);

        if(valor ==0) {
            break;
        }   
        if(valor %2==0){
            soma=soma+valor;
            cont++;
        }
    }
    media = soma / cont;
    
    if(cont > 0) {
        
    media = (float)soma/cont;
    printf("media dos pares: %f", media);
    } else
    {
    printf("nenhum numero par foi digitado");
    }
    
    printf("\n soma dos valores digitados: %d", soma);

    return 0;
}