#include<stdio.h>
#include<stdlib.h>
int square (int a)//função "square"
{
    return (a*a); //retorna para programa principal
}
main()//inicio do programa principal
{
               int num;
               printf("\n\n\tIntroduza um numero: ");
               scanf("%d",&num);
               num = square(num); //atribuição do retorno da função á variavel "num"
               printf("\n\n\tO Quadrado do numero introduzido corresponde a: %d\n",num);
               system("pause>>null");
               }
