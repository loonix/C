#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
main()
{
    char unome[30], pnome[20];
    printf("Introduza o seu ultimo nome <max de 30 caracteres>: ");
    gets(unome);
    printf("ntroduza o seu primeiro nome <max de 30 caracteres>: ");
    gets(pnome);
    printf("\n\nAs duas strings seguidas: %s%s\n\n",pnome,unome);
    system("pause>>null");
}
