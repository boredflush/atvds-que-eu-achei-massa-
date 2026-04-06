// Online C compiler to run C program online
#include <stdio.h>

int main() {

int nota, cont,total=0;
float media;
    
   for(cont=1;cont<=50;cont++){

        printf("digite sua nota");
        scanf("%d",&nota);
        
        
        total= total+nota;
        
        cont=cont+1;
    
  
    }
    
    
        media=total/50.0;
    printf("a media total foi: %f",media);
    
    
    

    return 0;
}