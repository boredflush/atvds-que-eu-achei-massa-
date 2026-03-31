#include <stdio.h>

int main() {
    
    int valor;

   printf("0 - EIXO TECNOLÓGICO\n1. ADS\n2. JOGOS DIGITAIS\n3. Moda\n4. Gastronomia\n5. Gestão\n6. Enfermagem\n7. Estética\n8. Pós-Graduação\n\nDigite o valor da sua unidade: ");
   scanf("%d",&valor);
   
        if(valor==1){
            printf("você pertence ao curso de ads");
        }
        else if(valor==2){
            printf("Você pertence ao curso de JOGOS DIGITAIS");
        }
        else if(valor==3){
            printf("Você pertence ao curso de Moda");
        }
        else if(valor==4){
            printf("Você pertence ao curso de Gastronomia");
        }
        else if(valor==5){
            printf("Você pertence ao curso de Gestão");
        }
        else if(valor==6){
            printf("Você pertence ao curso de Enfermagem");
        }
        else if(valor==7){
            printf("Você pertence ao curso de Estética");
        }
        else if(valor==8){
            printf("Você pertence a Pós Graduação");
        }
        else {
            printf("nao perte a curso algum da FACULDADE SENAC");
        }
    return 0;
}