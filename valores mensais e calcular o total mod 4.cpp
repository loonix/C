#include<stdlib.h>
#include<stdio.h>
main()
{
      float sal[12];//12 meses
      float total;
      int i;
      for(i=0;i<12;i++)
      {
                       printf("Introduza o salario do mes %d:",i+1);
                       scanf("%f",&sal[i]);
                       }
                       puts("  Mes     Valor");
                       for(i=0,total=0.0;i<12;i++)
                       {
                                                  printf("  %3d     %9.2f\n",i+1,sal[i]);
                                                  total+=sal[i];
                                                  }
                       printf("Total anual :%9.2f\n",total);
                       system("pause>>null");
                       }
