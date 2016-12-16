#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
      char nome[41];
      int i;
      printf("\nIntroduza o seu nome em maiusculas ate 40 caracteres :");
      gets(nome); // le a string digitadapelo utilizador
      for(i=0;nome[i];i++){ nome[i] = toupper(nome[i]); //for termina quando?
      printf("\n Nome em maiusculas: %s",nome);}
      system("pause>>null");
      }
