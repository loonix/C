#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
      int vet[10];//declara�ao do vector "vet" com 10 elementos(tipo int)
      int x;
      int y=0;
      //preenchimento do vector "vet"
      for(x=0;x<=9;x++)
      {
                       vet[x]=y+2;
                       y=y+2;
                       }
      //apresenta�ao do vector vet, por isso se repete o ciclo "for".
      for(x=0;x<=9;x++)
      //exebi�ao dos valores pares 2,4,6,8,10,12,14,16,18,20.
      printf("%d ",vet[x]);
      printf("\n\n");
      system("pause>>null");
      }
