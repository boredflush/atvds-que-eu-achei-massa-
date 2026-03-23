#include <stdio.h>

int main()
{
    int temperatura,farenheit;
    
    printf ("digite a temperatura");
    
    scanf ("%d", &temperatura);
    
    farenheit=(temperatura*1.8)+32;
    
    printf("a temperatura em farenheit é %d", farenheit);
    
    
    return 0;
}