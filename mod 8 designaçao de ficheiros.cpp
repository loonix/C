#include<stdio.h>
#include<conio2.h>
#include<string.h>
#include<stdlib.h>
main()
{
      FILE *fp1, *fp2;
      int contador=0;
      char linha[200];
      fp1 = fopen("ficheiro_1.txt","r");
      fp2 = fopen("ficheiro_2.txt","w");
      contador++;
      if(contador%2 == 0)
                    {
                    fputs(linha,fp2);
                    }
      }
      fclose(fp1);
      fclose(fp2);
      system(pause>>null);}
