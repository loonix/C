#include<stdio.h>
#include<stdlib.h>
int square (int a)//fun��o "square"
{
    return (a*a); //retorna para programa principal
}
main()//inicio do programa principal
{
               int num;
               printf("\n\n\tIntroduza um numero: ");
               scanf("%d",&num);
               num = square(num); //atribui��o do retorno da fun��o � variavel "num"
               printf("\n\n\tO Quadrado do numero introduzido corresponde a: %d\n",num);
               system("pause>>null");
               }
