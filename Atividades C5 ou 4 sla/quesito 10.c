// Online C compiler to run C program online
#include <stdio.h>

int main() {

int idade, sexo, opiniao, cont;
int hm = 0, homens_ruim = 0, mle = 0, soma = 0, esperavam = 0;
float media, perc;

for(cont = 1; cont <= 15; cont++) {

    printf("idade:");
    scanf("%d", &idade);

    printf("sexo (1-fem/2-mas):");
    scanf("%d", &sexo);

    printf("opiniao(1-nao gostei/2-esperava mais/3-vale o ingresso/4-Excelente):");
    scanf("%d", &opiniao);

    if(sexo == 2) hm++;

    if(sexo == 2 && opiniao == 1) homens_ruim++;

    if(sexo == 1 && opiniao == 4) {
    
    soma += idade;
    
    mle++;}

    if(opiniao == 2) esperavam++;
    }

    if(mle > 0) {
        media = (float)soma / mle;
    } else {
        media = 0;
    }

    if(hm > 0) {
        perc = (homens_ruim * 100.0) / hm;
    } else {
        perc = 0;
    }

    printf("\nmedia mulheres excelente: %f", media);
    printf("porcentagem homens que nao gostaram: %f", perc);
    printf("esperavam mais: %d", esperavam);

    return 0;
}