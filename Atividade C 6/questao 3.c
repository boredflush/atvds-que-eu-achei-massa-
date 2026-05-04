// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    //variaveis//
  int p;
  int v[21];
  int w[21];
  int x[21];
    //for que dá o resultado//
    
    for (p=1;p<=20;p++){
    v[p]=p;
    w[p]=21-p;
    }
    //a hora da verdade//  
    for (p=1;p<=20;p++){
       x[p]=v[p]*w[p];
 printf("%d x %d = %d\n",v[p],w[p],x[p]);
  
  
  }
    return 0;
}