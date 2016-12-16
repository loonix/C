#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{     float M;
      char nome[3];
      int x,y,tam;
      printf("Introduza uma palavra:");
      gets(nome);
      tam = strlen(nome);
      for(x=0;x<=tam-1;x++)
      {                  printf("%c\a",toupper(nome[x]));
                         for(M=1;M<=10000000;M++);
      printf("");
      }
       system("pause>>null");
       }
      
