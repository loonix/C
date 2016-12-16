#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int verificavogal (char M)      
      {            
      if(M=='a'||M=='A'||M=='e'||M=='E'
      ||M=='i'||M=='T'||M=='o'||M=='u'||M=='U')
      return(1);
      else
      return(0);
      }
      main()
{
      char nome[30];
      int x,t;
      printf("\nDigite um nome: ");
      gets(nome);
      t=strlen(nome);
      if(verificavogal(nome[x])==1)
      printf("\nA letra [%c] e uma VOGAL:",nome[x]);
      else
      printf("\nA letra [%c] e uma CONSUANTE:",nome[x]);
      printf("\n\n");
      system("pause");
      return(0);
      }
