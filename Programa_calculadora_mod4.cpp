#include<stdio.h>
#include<stdlib.h>

int somar (int a,int b)
{
    int soma;
    soma=(a+b);
    return soma;
}
int subtrair (int a,int b)
{
    int subtracao;
    subtracao=(a-b);
    return subtracao;
}
int multiplicar (int a,int b)
{
    int multiplicacao;
    multiplicacao=(a*b);
    return multiplicacao;
}
int dividir (int a,int b)
{
    int divisao;
    divisao=(a/b);
    return divisao;
}
main()
{
      char menu;
      int a,b;
      
      do
      {
          system("cls");
          system("color F0");
          printf("\n\t\t A minha primeira maquina de calcular");
          printf("\n\t\t ===================================");
          printf("\n\t\t          Menu de opcoes");
          printf("\n\t\t -----------------------------------");
          printf("\n\t\t Opcao - [1] -----> [Somar]");
          printf("\n\n\t\t Opcao - [2] -----> [Subtrair]");
          printf("\n\n\t\t Opcao - [3] -----> [Multiplicar]");
          printf("\n\n\t\t Opcao - [4] -----> [Dividir]");
          printf("\t\t ------------------------------------");
          printf("\n\t\t Opcao - [5] -----> Sair do programa...");
          printf("\n\t\t ===================================");
          printf("\n\n\n\t\t Escolha um opcao: ");
          scanf(" %c", &menu);
          
          fflush(stdin);
          
          switch (menu)
          {
                 case '1' :{printf("\n\t\t -- Escolheu a opcao 'Somar' -- ");
                             printf("\n\t\t\t Introduza o primeiro operando: ");
                             scanf("%d", &a);
                             printf("\t\t\t Introduza o segundo operando: ");
                             scanf("%d", &b);
                             
                 printf("\n\t\t\t\t Soma total -----> %d\n", somar(a,b));
                 printf("\t\t ----------------------------------");
                 printf("\n\t\t Pressione ENTER, para voltar ao MENU DE OPCOES...");
                 getchar();}
                 break;
                 case '2' :{printf("\n\t\t-- ESCOLHEU A OPCAO SUBTRAIR --");
                            printf("\n\t\t\tIntroduza o primeiro operando");
                 scanf("%d",&a);
                 printf("\t\t\tIntroduza o segundo operando: ");
                 scanf("%d",&b);
                 printf("\n\t\t\tSubtraccao Total --->%d\n",subtrair(a,b));
                 printf("\n\t\t------------------------");
                 printf("\n\t\tPressione enter, para voltar ao menu de opcoes...");
                 getchar();}
                 break;

                 case'3':{printf("\n\t\t-- ESCOLHEU A OPCAO MULTIPLICAR --");
                 printf("\n\t\t\tIntroduza o primeiro operando: ");
                 scanf("%d",&a);
                 printf("\t\t\tIntroduza o segundo operando: ");
                 scanf("%d",&b);
                 printf("\n\t\t\tMultiplicacao Total ---->%d\n",multiplicar(a,b));
                 printf("-----------------------------");
                 printf("\n\t\tPressione enter, para voltar ao menu de opcoes...");
                 getchar();}
                 break;

                 case'4':{printf("\n\t\t-- ESCOLHEU A OPCAO DIVIDIR --");
                 printf("\n\t\t\tIntroduza o primeiro operando: ");
                 scanf("%d",&a);
                 printf("\t\t\tIntroduza o segundo operando: ");
                 scanf("%d",&b);
                 printf("\n\t\t\tDivisao Total ---->%d\n",dividir(a,b));
                 printf("-----------------------------");
                 printf("\n\t\tPressione enter, para voltar ao menu de opcoes...");
                 getchar();}
                 break;

                 case'5' :{printf("\n\t\t\t ================================");
                 printf("ABANDONAR PROGRAMA ..TCHAUZINHO !!!");
                 printf("\n\t\t\t ================================");
                 printf("\n\t\t\t[Pressione 2 vezes 'ENTER', para 'SAIR' !!!]");
                 printf("\n\t\t\t---------------------------------");}
                 break;
                 default : {printf("\n\t\t\tOPCAO INVALIDA!!!");
                 printf("\n\t\t\t---------------------------------");
                 printf("\n\t\t   Pressione ENTER, para voltar ao MENU de OPCOES");
                 printf("\n\t\t  ----------------------------------");}
                 }
                 getchar();
                 }
                 while(menu !='5');
                 system("pause>>null");
                 }
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
