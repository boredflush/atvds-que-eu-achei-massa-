// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    //variaveis// 
    
    int p;
    int tfilhos[1000], percentual;
    float tsalario[1000],soma_salarios=0,soma_filhos;
    float salario, mediasal=0, mediaf=0, mediafi=0;
    int habit2fi=0, perc2=0;
    float maior,menor;
  
  //for que vai repetir 1000 vezes 1 pra cada aluno//
  
 for (p=1; p<=1000;p++){
  
  //salario dos alunos//
  
    printf("digite seu salário (0 se nao houver) :");
    scanf("%f",&tsalario[p]);
  
  //quantidade de filhos//
  
    printf("digite quantidade de filhos (0 se nao houver): ");
  
    scanf("%d",&tfilhos[p]);
    
    //habitantes com mais de 2 filhos//
    
    
    if (tfilhos[p]>=2){
        habit2fi++;
        
    }
    
 }
     //calculo dos maiores salarios e menores//
     
      for (p=1; p<=1000;p++){
          
            if (p == 1) {
        maior = tsalario[1];
        menor = tsalario[1];
            }   
       if (tsalario[p]>maior){
           maior=tsalario[p];
         
       }
          
       else if (tsalario[p]<menor){
           menor=tsalario[p];
       }    
          
    
          
      }
      
      for(p=1; p<=1000;p++){
          
          soma_salarios = soma_salarios + tsalario[p];
          soma_filhos =soma_filhos + tfilhos[p];
      }
      
      
      

      //percentual de pais de dois ou mais////////////////////////////////////////////////
      
    percentual = (habit2fi / 1000.0) * 100;
    mediasal =soma_salarios / 1000.0;
    mediaf=soma_filhos/1000.0;
//////os prints//////////////////////////////////////////////////////////////////

    
    
     printf("MAIOR VALOR DE SALARIO:%f",maior);
     printf("\nMENOR VALOR DE SALARIO :%f",menor);
     printf("\n media salarial dos alunos: %f",mediasal);
     printf("\n media do num de filhos dos alunos: %f",mediaf);
     printf("\n percentagem de habitantes com 2 ou mais filhos: %d porcento",percentual);

    return 0;
}