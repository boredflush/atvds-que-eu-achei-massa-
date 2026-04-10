// Online C compiler to run C program online
#include <stdio.h>

int main() {
  
    int idade=0,sexo=0,opiniao=0,cont,mle=0,md2=0,md3=0;

    
    for(cont=1;cont<=2;cont++){
    
    printf("Digite idade:");
    scanf("%d",&idade);
    
   printf("Digite sexo(1 fem/2 mas):");
   scanf("%d",&sexo);
   
    printf("Digite opiniao (1-não gostei/2-esperava mais/3-vale o ingresso/4-Exelente) :");
    scanf("%d",&opiniao);
    
    if(sexo==1){
    
    sexo++;
    }
    if(mle==4){
        mle++;
        
    }

    md1= mle/15;
      
    printf("total de mulheres que acharam o filme excelente foi :%d",md1);
    return 0;
}
}
