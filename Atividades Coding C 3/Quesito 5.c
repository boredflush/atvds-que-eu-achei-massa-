
#include <stdio.h>

int main()
{
	float nota1, nota2, media;
	
	printf("digite nota 1:");
	scanf("%f",&nota1);
	
	printf("digite nota 2:");
	scanf("%f",&nota2);
	
    media=nota1+nota2/2;
    
    if((media>=7)&&(media<=20))
{
printf("aluno aprovado");    
}

 else if(media<7)
{
printf("aluno reprovado");    
}

else if (media>21){
printf("numero invalido");}

	return 0;
}
