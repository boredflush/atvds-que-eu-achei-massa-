// Online C compiler to run C program online
#include <stdio.h>

int main()
{
  int p;
  int v[10];
  
  v[0]=0;
   
  for(p=1;p<=10;p++){
      printf("digite um valor:");
     scanf("%d",&v[p]);
     v[p]= v[p] + v[p-1];
  }
  
  printf("a soma dos valores são: %d",v[10]);
  
    return 0;
}
