#include<stdio.h>
#include<stdlib.h>
main()
{
int z,vet[21],t=20;
for(z=0;z<20;z++)
{ vet[z]=t;
t=t-2;
}
for(z=10;z<11;z++)
printf("%d\t",vet[z]);
printf("\n");
system("pause>>null");
return(0);
}
