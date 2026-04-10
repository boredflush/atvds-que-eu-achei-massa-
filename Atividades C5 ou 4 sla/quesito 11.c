/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int canal,pessoas,sbt=0,record=0,globo=0,redetv=0,total=0;

for(canal=1;canal!=0;){
        printf("Canal (1-SBT 2-Record 3-Globo 4-RedeTV 0-sair): ");
        scanf("%d",&canal);
        if(canal==0)break;

printf("Pessoas: ");
 scanf("%d",&pessoas);

        total+=pessoas;

    
    if(canal==1)sbt+=pessoas;
    
    else if(canal==2)record+=pessoas;
    
    else if(canal==3)globo+=pessoas;
    
    else if(canal==4)redetv+=pessoas;
    }

printf("SBT %f\n",sbt*100.0/total);
printf("Record %f\n",record*100.0/total);
printf("Globo %f\n",globo*100.0/total);
   printf("RedeTV %f\n",redetv*100.0/total);
   
   
   
int maior=sbt,menor=sbt;
    int cmaior=1,cmenor=1;

  if(record>maior){maior=record;cmaior=2;}
   if(globo>maior){maior=globo;cmaior=3;}
   
  if(redetv>maior){maior=redetv;cmaior=4;}

if(record<menor){menor=record;cmenor=2;}

if(globo<menor){menor=globo;cmenor=3;}

    if(redetv<menor){menor=redetv;cmenor=4;}

printf("Maior audiencia: Canal %d\n",cmaior);
printf("Menor audiencia: Canal %d\n",cmenor);

    return 0;
}