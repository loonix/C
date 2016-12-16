#include<stdlib.h>
#include<stdio.h>
int PAR(int a)
{
    if(a%2==0)
    return 1;//se e verdadeiro (1)
    else
    return 0;//se e falso (0)
}
main()
{
      int num;
      printf("Este Programa determina se um numero e par ou nao\n\n");
      printf("Introduza o numero :");
      scanf("%d",&num);
      if(PAR(num)==1)
      printf("\nO numero e par");
      else
      printf("\nO numero e impar");
      system("pause>>null");
      }
