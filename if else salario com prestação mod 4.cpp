#include<stdio.h>
#include<stdlib.h>
main()
{
      float a,b,c;
   printf("\n\n\t\t\tInsira Salário :");
   scanf("%f",&a);
   printf("\n\n\t\t\tInsira a Prestacao :");
   scanf("%f",b);
   c = (a*0.20);
  if(a>c)
  printf("\n\n\t\t\tEmprestimo pode ser concedido");
  else 
printf("\n\n\t\t\tVota se quiser\n\n");
   system("pause>>null");
}
