// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int num=0,i=0,soma=0;
     
  while (1){
  
     printf("digite o valor:");
     scanf("%d",&num);
      if (num==-1) {
            break;
        }
        soma+=num;
        i++;
  }
  
    
    printf("aqui está a media de todos valores: %d", soma/i);
    
    
    
    
    return 0;
}