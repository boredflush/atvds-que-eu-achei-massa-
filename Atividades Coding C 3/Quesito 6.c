
#include <stdio.h>

int main()
{
	float num1,num2,num3;
	
	printf("digite valor 1:");
	scanf("%f",&num1);
	printf("digite valor 2:");
	scanf("%f",&num2);
	printf("digite valor 3:");
	scanf("%f",&num3);

    if (num1>num2&&num3){
        printf("numero 1 é o maior");
    }
    else if (num2>num1&&num3){
        printf("numero 2 é o maior");
    }  
    else if (num3>num1&&num2){
        printf("numero 3 é o maior");
    }
    
else if (num3=num1&&num2){
        printf("todos numeros sao iguais");
    }

	return 0;
}
