// Online C compiler to run C program online
#include <stdio.h>

int main() {
  
    int idade=0,sexo=0,opiniao=0,cont,md1,md2,md3;

    
    for(cont=1;cont<=2;cont++){
    
    printf("Digite idade:");
    scanf("%d",&idade);
    
   printf("Digite sexo(1 fem/2 mas):");
   scanf("%d",&sexo);
   
    printf("Digite opiniao (1-não gostei/2-esperava mais/3-vale o ingresso/4-Exelente) :");
    scanf("%d",&opiniao);
    
    if(sexo==1&&opiniao==4){
    
    md1=sexo+opiniao/2;
        
        printf("total de mulheres que acharam o filme excelente foi :%d",md1);
    
}
    
    return 0;
}
