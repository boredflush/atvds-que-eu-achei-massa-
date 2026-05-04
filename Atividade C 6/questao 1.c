#include <stdio.h>

int main()
{
  int p;
  int v[100];
  for(p=1;p<=100;p++){
      
    if(p %2==0){
        printf("\n %d é 0",p);
    }
    else {
        printf("\n %d é 1",p);
    }
     
  }
  
    return 0;
}