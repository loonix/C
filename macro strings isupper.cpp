#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
      char nome[13];
      printf("\nDigite o seu primeiro nome ate 12 caracteres e 1a letra em maiuscula:  :");
      gets(nome); 
      if(isupper(nome[0])!=0)
      printf("\nA prmeira letra e maiuscula.");
      else printf("\nA primeira letra nao e maiuscula");
      system("pause>>null");
      }
