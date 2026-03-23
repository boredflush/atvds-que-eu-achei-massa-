#include <stdio.h>

int main()
{
    int votos_brancos,votos_validos,nulos,total;
    
    printf("digite o valor de votos_validos:");
    scanf("%d",&votos_validos);
    
     printf("digite o valor de votos_brancos");
    scanf("%d",&votos_brancos);
    
     printf("digite o valor de nulos");
    scanf("%d",&nulos);
    
    total=votos_brancos+votos_validos+nulos;
    
    printf("\n o percentual de votos nulos é %d", nulos*100/total);
    printf("\n no percentual de votos brancos é %d", votos_brancos*100/total);
    printf("\n no percentual de votos nulos é %d", votos_validos*100/total);
    return 0;
}