
#include <stdio.h>

int main()
{
	float num1, num2;

	printf("digite valor 1:");
	scanf("%f",&num1);

	printf("digite o valor 2:");
	scanf("%f",&num2);

	if (num1>num2) {
		printf("%f é maior que %f",num1,num2);
	}

	else if (num1<num2) {
		printf("%f e menor que %f",num1,num2);
	}
    else if (num1=num2){
        printf("%f é igual a ",num1,num2);
    }

	return 0;
}