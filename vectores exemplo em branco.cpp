#include<stdio.h>
#include<stdlib.h>
/*A fun�ao "inic" inicializa qualquer vector de inteiros
....� nessecario indicar a essa fun�ao qual o n� de elementos("int n")
que o vector contem*/

void inic(int s[],int n) //em "C" dentro de uma fun�ao , nao e possivel
                         //saber com quantos elementos foi declarado um
                         //vector que foi passado como argumento para
                         // essa fun�ao
                         
                         
                         
{
                         int i;
                         for(i=0;i<n;i++)
                         s[i]=0;
                         
}main()
{
       int v[10]; //declara�ao de vestores
       int x[20];
       inic(v,10);//invoca�ao das fun�oes
       inic(x,20);
       system("pause>>null");
       }
