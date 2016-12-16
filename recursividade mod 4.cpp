#include<stdio.h>
#include<stdlib.h>
unsigned factorial(int n)
{
         if(n==1) //critério de paragem
         return 1;
         else
         return(n*factorial(n-1));//chamada recursiva
         }
         main()
         {
              int num;
              printf("\nIntroduza o numero para o calculo do factorial: ");
              scanf("%d",&num);
              printf("\n  %d!=%u\n",num,factorial(num));
              system("pause");
              }
              
