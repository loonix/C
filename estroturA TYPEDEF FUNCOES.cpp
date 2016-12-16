#include<stdio.h>
#include<stdlib.h>

typedef struct {int dia,mes,ano;} data;
typedef struct pessoa
{
        char nome[100];
        int idade;
        float salario;
        data nasc;
        }pessoa;
        void mostrar(struct pessoa x) // funçao mostrar
        {
             printf("Nome     : %s\n",x.nome);
             printf("Idade    : %s\n",x.idade);
             printf("Salario  : %s\n",x.salario);
             printf("Dt. Nasc : %s\n",x.nasc.dia,x.nasc.mes,x.nasc.ano);
             }

main()
{
      struct pessoa p = {"Carlos",23,12345.67,{23,5,1954}};
      mostrar(p);
      system("Pause>>null");}
