#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main()
{
      char nome[30];
      int x,y,tam;
      printf("Introduza uma palavra:");
      gets(nome);
      tam = strlen(nome);
      for(x=1;x<=tam;x++)
      {
                         for(y=1;y<=x;y++)
      printf("%s",nome);
      printf("\n");
      }
       system("pause>>null");
       }
      
