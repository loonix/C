#include<stdio.h>
#include<stdlib.h>
#define DIM 30
main()
{
      int k=0;
      int v[DIM];
      float j=3.14;
      char c='P';
      printf("Tamanho em bytes dos tipos de dados\n\n");
      printf("Tamanho de int    %d   bytes\n",sizeof k);
      printf("Tamanho do float  %d   bytes\n",sizeof j);
      printf("Tamanho do char   %d   bytes\n",sizeof c);
      printf("Tamanho do vector de %d inteiros: %d bytes\n",DIM,sizeof v);
      system("pause>>null");}
