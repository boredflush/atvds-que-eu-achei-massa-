// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int num,maior,menor,cont;

    printf("digite um numero:");
    scanf("%d", &num);

    maior=num;
    menor=num;

    for(cont = 2; cont <= 20; cont++){
        printf("digite um numero:");
        scanf("%d", &num);

        if(num > maior){
            maior = num;
        }

        if(num < menor){
            menor = num;
        }
    }

    printf("maior: %d", maior);
    printf("menor: %d", menor);

    return 0;
}