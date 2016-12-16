#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
      float celcius;
      float fare;
      printf("Introduza a temperatura em graus Celcius: ");
      scanf("%f",celcius);
      fare = (9*celcius+160)/(5);
      printf("\n%.2f graus Celcius corresponde(m) a %.2f graus Fareheit\n\n",celcius,fare);
      system("pause");
      }
