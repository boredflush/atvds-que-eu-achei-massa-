
// Online C compiler to run C program online
#include <stdio.h>

int main() {
  
    int idade=0,sexo=0,opiniao=0,cont;
    float md1,md2,md3;
    
    for(cont=1;cont<=15;cont++){
    
    printf("Digite idade:");
    scanf("%d",&idade);
    
   printf("Digite sexo(1 fem/2 mas):");
   scanf("%d",&sexo);
   
    printf("Digite opiniao (1-não gostei/2-esperava mais/3-vale o ingresso/4-Exelente) :");
    scanf("%d",&opiniao)
    
    if(sexo==1&&opiniao==4){
        
        md1++;
    
    }

}

    return 0;
}