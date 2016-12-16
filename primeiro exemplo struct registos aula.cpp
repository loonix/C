#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
      system("color E1");
      struct data //definição de estrutura (registo)
      {
             int dia;
             char mes[10];
             int ano;
             };
             
      struct data hoje;//declaraçao da variavel hoje do tipo struct data
      hoje.dia=4; //acesso aos respectivos campos
      strcpy(hoje.mes,  "Abril");
      hoje.ano=2009;
      
      //impressao dos campos respectivos
      printf("%d de %s de %d \n",hoje.dia,hoje.mes,hoje.ano);
      
system("pause>>null");
}
