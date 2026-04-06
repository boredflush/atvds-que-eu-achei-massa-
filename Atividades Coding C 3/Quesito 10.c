#include <stdio.h>

int main() {
    
    float valor1,valor2,resultado;
    char op;
        
    printf("digite valor1:");
    scanf("%f",&valor1);
    
    printf("digite valor2:)");
    scanf("%f",&valor2);

    printf("digite a operação (+,-,/,*)");
    scanf(" %c",&op);
    
    if (op == '+'){

        printf("o resultado é %f",valor1+valor2);
    }
    else if (op == '-'){

        printf("o resultado é %f",valor1-valor2);
       }
     else if (op == '/'){

        printf("o resultado é %f",valor1/valor2);
          }
      else if (op == '*'){

        printf("o resultado é %f",valor1*valor2);
             }
    else{    
            printf("ixe deu ruim");}
    return 0;
}
