#include<stdio.h>
#include<stdlib.h>
main()
{
      int x,y=0,vet[10],vet1[10];//declaraçao de variaveis
      
      printf("\n\n\n\tPREENCHIMENTO DE UM VECTOR COM OS NUMEROS PARES DE 2 A 20.\n\n");
      printf("\n\tPREENCHIMENTO DE UM VECTOR COM OS NUMEROS DE 10 A 19 (INCLUSIVE).\n\n");
      printf("\n\tA ultima linha representa a soma sucessiva de cada um elemento. \n\n");
      
      for(x=0;x<=9;x++) //preenchimento do vector
      {
      vet[x]=y+2;
      y=y+2;
      }
      
      for(x=0;x<=9;x++) // apresentaçao do vector vet
      
      printf("\t%d ",vet[x]); //apresentaçao dos valores pares 2,4,6,8...20.
      
      for(x=0;x<=9;x++)//apresentaçao do vector vet1
      {
      vet1[x]=x+10;
      }
      
      for(x=0;x<=9;x++) // apresentaçao do vector vet
      
      printf("\t%d ",vet1[x]); //apresentaçao dos valores pares 
                              //10,11,12,13,14...20
      
      for(x=0;x<=9;x++)//preenchimento da soma dos vectores vet[x] + vet1[x]
      
      //apresentaçao da soma dos valores
      //2+10,4+11,6+12,8+13,10+14,12+15,14+16,16+17,18+18,20+19.
      printf("\t%d ",vet[x]+vet1[x]);
      
      system("pause>>null");
      }
