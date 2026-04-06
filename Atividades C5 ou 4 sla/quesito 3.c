// Online C compiler to run C program online
#include <stdio.h>

int main() {

int nota, cont= 1,total=0;
float media;
    
   do{

        printf("digite sua nota");
        scanf("%d",&nota);
        
        
        total= total+nota;
        
        cont=cont+1;
    
  
    }
    while(cont<=50);
    
        media=total/50.0;
    printf("a media total foi: %f",media);
    
    
    

    return 0;
}