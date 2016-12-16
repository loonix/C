#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

float maior(float n1,float n2);
{
      if(n1>n2)return n1;
      else return n2;
      {
      main()
      {
            int a,b,m;
            printf("Introduza dois numeros reais diferentes: ");
            scanf("%f",&a);
            scanf("%f",&b);
            m = maior(a,b);
            printf("\n\nO maior valor entre %f e %f e %2f.",a,b,m);
system("pause");
      }
