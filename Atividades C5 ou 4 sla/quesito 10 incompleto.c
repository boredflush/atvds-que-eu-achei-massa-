// Online C compiler to run C program online
#include <stdio.h>

int main() {
  
    int midade=0,idade=0,sexo=0,opiniao=0,cont,hm=0,ml=0,mle=0,md1=0,md2=0;

    
    for(cont=1;cont<=2;cont++){
    
    printf("Digite idade:");
    scanf("%d",&idade);
    
   printf("Digite sexo(1 fem/2 mas):");
   scanf("%d",&sexo);
   
    printf("Digite opiniao (1-não gostei/2-esperava mais/3-vale o ingresso/4-Exelente) :");
    scanf("%d",&opiniao);
    
    if(sexo==2){
        hm++;
    }
    
    if(sexo==2&&opiniao==1){
        md2++;
    }

    if(sexo==1){
    ml++;
    }
    if(sexo==1&&opiniao==4){
        midade+=idade;
         mle++;
    }
    }
    
    (md2*100)/hm
    //esse aq demorou um bocado
    md1= midade/mle;
    printf("a media de idade das mulheres que acharam o filme excelente foi :%d",md1);
    printf("")
 
 return 0;
}
