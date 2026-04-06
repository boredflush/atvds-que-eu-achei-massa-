// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int num,maior;
    
    printf("digite o valor:");
    scanf("%d",&num);
    
    maior = num;
    
    while (num !=0){
        printf("digite o valor");
        scanf("%d",&num);
        
        if (num > maior){
            maior=num;
        }
    }


printf("maior numero é : %d",maior);

    return 0;
}