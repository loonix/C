#include<stdio.h>
#include<stdlib.h>

main()
{
int valor_1,valor_2,valor_3;
int maior_numero;

printf("\n\n\n");
printf("\t\t\tIntroduza Tres Valores Inteiros...\n\n");
printf("\t...De seguida, vou indicar qual o mairor numero introduzido !!! \n\n");

scanf("%d",&valor_1);
scanf("%d",&valor_2);
scanf("%d",&valor_3);
      
if(valor_1>valor_2 && valor_1>valor_3)
maior_numero=valor_1;
else
{
if(valor_2>valor_3)
maior_numero=valor_2;
else
maior_numero=valor_3;
}
          // Impressao no ecran da variavel maior_numero
printf("\n\n\n\t\t O maior numero introduzido foi o -> %d\n\n\n\n",maior_numero);
          
system("pause"); // parar programa
}
