#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//estruturas denmtro de estroturas...
main()
{
      system("color E2");
      struct Data {//definiçao de estrutura (Registo)
      int Dia;
      int Mes[10];
      int Ano;
      };
      struct Pessoa {//definiçao da estrutura (Registo)
      char Nome[50];
      char Telefone[20];
      char Endereco[50];
      struct Data Nascimento;
      };
      struct Pessoa pessoal;//declaraçao da variavel pessoa1 do tipo struct pessoa
      
      strcpy(pessoal.Nome, "Pedro"); //copia string para campo respectivo
      strcpy(pessoal.Telefone, "911234567");
      strcpy(pessoal.Endereco, "Av. Republica, n-10 - VNG");
      
      pessoal.Nascimento.Dia = 15; //atribuição do valor 15 (inteiro) ao campo respectivo
      strcpy(pessoal.Nascimento.Mes, "Janeiro");
      pessoal.Nascimento.Ano = 1980;//atrinuiçao do valor 1980 (inteiro) ao campo respectivo
      
      printf("%s\n%s\n%s\n%d de %s de %d\n", //impressao de resultados...
      
      pessoal.Nome, pessoal.Telefone, pessoal.Enderesso,
      pessoal.Nascimento.Dia, pessoal.Nascimento.Mes, pessoal.Nascimento.Ano);
      system("pause>>null");}
