#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
//função 1
void tiro(int x)
{
     switch(x)
     {case 1:printf("\nEste teste e facil");
      case 2:printf("\nAi de quem diga o contrario...\n\n\n\n\n\n");
      return;
      case 3:printf("\nEstou no tiro x=%d",x);
      tiro(x++);break;
      printf("\n Vou sair do Tiro");
      default:printf("\nEntrei pelo default");
      tiro(x);
      }
}
//função 2
void liro(int x)
{
     switch(x)
     {case 2:return;
     printf("\nOlarilolela");
     break;
     case 3:printf("\nPercebo Bue de C");
     break;
     printf("\nSou mesmo bom...");
     break;
     case 4:printf("Nao percebo nada disto\n");
     liro(2);return;
     default:printf("Ca estou eu mais uma vez");
     liro(x--);
     }
}
main()
{
      liro(5);
      system("pause");
      }

/*
  
      ####################################
      #a)tiro(1); c)liro(2); e)liro(5);  #
      #b)tiro(3); d)liro(4);             #
      ####################################*/
