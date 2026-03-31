#include <stdio.h>

int main() {
    
    char sexo;
        
    printf("digite seu sexo(m ou f)");
    scanf("%c",&sexo);
    
    if (sexo == 'm'){
        printf("voce é homem");
    }
    
    else if (sexo == 'f'){
        printf("voce é mulher");
    }
    
    else {
        printf("nenhum dos dois");
    }
    return 0;
}