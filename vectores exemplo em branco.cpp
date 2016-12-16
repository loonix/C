#include<stdio.h>
#include<stdlib.h>
/*A funçao "inic" inicializa qualquer vector de inteiros
....é nessecario indicar a essa funçao qual o nº de elementos("int n")
que o vector contem*/

void inic(int s[],int n) //em "C" dentro de uma funçao , nao e possivel
                         //saber com quantos elementos foi declarado um
                         //vector que foi passado como argumento para
                         // essa funçao
                         
                         
                         
{
                         int i;
                         for(i=0;i<n;i++)
                         s[i]=0;
                         
}main()
{
       int v[10]; //declaraçao de vestores
       int x[20];
       inic(v,10);//invocaçao das funçoes
       inic(x,20);
       system("pause>>null");
       }
