/*Programa de procura de um array*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
      int vet[20]; //declaraçao do vector "vet" com 10 elementos(tipo int)
      int x;
      int y=0;
      int num;
      int i;
      system("color E1");
      //preenchimento do "vet"
      for(x=0;x<=9;x++)
      {
                       vet[x]=y+2;
                       y=y+2;
                       }
                       printf("\n\t Exebiçao dos elementos do array - numeros pares de 0 a 20\n\n");
                       //apresentaçao do vector vet, por isso repete o ciclo for
                       for(x=0;x<=9;x++)
                       //exebiçao dos valores pares 2,3,4,6,8,10,12,14,16,18,20.
                       printf(" ......%d",vet[x]);
                       printf("\n\n");
                       
                       printf("\tIntroduza um numero para verificar se consta no array de cima -->"); scanf("%d",&num);
                       
                       i=0;
                       while ((i<=10-1) && (vet[i]!= num))
                       {i=i+1;} // as chavetas aqui sao desnecessarias
                       if(i==10)
                       printf("\n\tO numero %d nao existe no array", num);
                       else 
                       printf("\n\tO numero %d encantrado na posicao %d",num, i);
                       system("pause>>null");
                       }
