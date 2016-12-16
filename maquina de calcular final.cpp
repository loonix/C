#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio2.h>
#include<string.h>
#include<conio.h>


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
float quadrado (float a)
{
      float quadrados;
      quadrados = pow(a,2);
      return quadrados;
      }
float area (float a,float b)
{
      float areas;
      areas = (a*b);
      return areas;
      }
int idade (int a,int b)
{
    int idades;
    idades=(a-b);
    return idades;
}
float perimetro (float z,float x,float h,float d)
{
    float perimetros;
    perimetros = (z+x+h+d);
    return perimetros;
}
float raiz (int a)
{
    float raizes;
    raizes = sqrt(a);
    return raizes;
}

main()
{
      char menu;
      int a,b;
      float z,x,h,d;

      
      do
      {
          system("cls");
          textbackground (15);

   
textcolor(8);               /*Cabeçalho*/  
            printf("\n\t\t      Linguagens de Programacao       ");
            printf("\n\t\t            Daniel Guedes             ");
            printf("\n\t\t      A Maquina de Calcular Em C      ");  
   printf("\n\t__________________________________________________________\n\n");                
                                 
                                 /*Menu*/
                      
            
            printf("\n\t\t      ____________________________      ");         
            printf("\n\t\t     /                            \\    ");                   
            printf("\n\t\t    / .-<(Maquina De Calcular)>-.  \\   ");
            printf("\n\t\t __/________________________________\\__");
            printf("\n\t\t|                                      |\n");
  printf("                |            Menu de opcoes            |");
            printf("\n\t\t|______________________________________|");
          printf("\n\n\t\t|   [Somar].........................1  |");
          printf("\n\n\t\t|   [Subtrair]......................2  |");
          printf("\n\n\t\t|   [Multiplicar]...................3  |");
          printf("\n\n\t\t|   [Dividir].......................4  |");
          printf("\n\n\t\t|   [Perimetros]....................5  |");
          printf("\n\n\t\t|   [Areas].........................6  |");
          printf("\n\n\t\t|   [Numero Seguinte]..............7  |");
          printf("\n\n\t\t|   [Quadrados].....................8  |");
          printf("\n\n\t\t|   [Raiz Quadrada].................9  |");
          printf("\n\n\t\t|   [Idade].........................i  |");
          printf("\n\n\t\t|   [Sair do programa]..............s  |");
          printf("\n\n\t\t|______________________________________|");
          printf("\n\n\n\t\t Introduza uma opcao: ");
          scanf(" %c", &menu);
          
          fflush(stdin);
          
          switch (menu)
          {
                 case '1' :{ printf("\n\t\t ____________");
                             printf("\n\t\t|            |");
                             printf("\n\t\t|   Somar    |");
                             printf("\n\t\t|____________|_______________________________________________");
                             printf("\n\t\t\t\t Introduza o primeiro operando: ");
                             scanf("%d", &a);
                             printf("\t\t\t\t Introduza o segundo operando: ");
                             scanf("%d", &b);
                             
                 printf("\n\t\t\t\t Soma >> %d\n", somar(a,b));
                 printf("\t\t______________________________________________________________");
                 printf("\n\t\t Pressione a tecla enter, para voltar ao menu...");
                 getchar();}
                 break;
                 
                 case '2' :{ printf("\n\t\t ____________");
                             printf("\n\t\t|            |");
                             printf("\n\t\t|  Subtrair  |");
                             printf("\n\t\t|____________|_______________________________________________");
                            printf("\n\t\t\t\tIntroduza o primeiro operando: ");
                             scanf("%d",&a);
                             printf("\n\t\t\t\tIntroduza o segundo operando: ");
                              scanf("%d",&b);
                               printf("\n\t\t\tSubtraccao >> %d\n",subtrair(a,b));
                                printf("\n\t\t______________________________________________________________");
                                   printf("\n\t\tPressione enter, para voltar ao menu de opcoes...");
                                      getchar();}
                                         break;

                 case'3':{   printf("\n\t\t _____________");
                             printf("\n\t\t|             |");
                             printf("\n\t\t| Multiplicar |");
                             printf("\n\t\t|_____________|_______________________________________________");
                                printf("\n\t\t\t\t\tIntroduza o primeiro operando: ");
                                   scanf("%d",&a);
                                      printf("\n\t\t\t\tIntroduza o segundo operando: ");
                                            scanf("%d",&b);
                                                printf("\n\t\t\tMultiplicacao >> %d\n",multiplicar(a,b));
                                                    printf("______________________________________________________________");
                                                         printf("\n\t\tPressione a tecla enter, para voltar ao menu...");
                                                                  getchar();}
                                                                  break;

                 case'4':{   printf("\n\t\t ____________");
                             printf("\n\t\t|            |");
                             printf("\n\t\t|   Dividir  |");
                             printf("\n\t\t|____________|_______________________________________________");
                 printf("\n\t\t\t\tIntroduza o primeiro operando: ");
                 scanf("%d",&a);
                 printf("\n\t\t\t\tIntroduza o segundo operando: ");
                 scanf("%d",&b);
                 printf("\n\t\t\tDivisao >> %2.d\n",dividir(a,b));
                 printf("______________________________________________________________");
                 printf("\n\t\tPressione a tecla enter, para voltar ao menu...");
                 getchar();}
                 break;

                 case'5':{   printf("\n\t\t _____________");
                             printf("\n\t\t|             |");
                             printf("\n\t\t|  Perimetro  |");
                             printf("\n\t\t|_____________|_______________________________________________");
                 printf("\n\t\t\tIntroduza o primeiro comprimento: ");
                 scanf("%f",&z);
                 printf("\t\t\t\tIntroduza o segundo comprimento: ");
                 scanf("%f",&x);
                  printf("\t\t\t\tIntroduza a primeira largura: ");
                 scanf("%f",&h);
                 printf("\t\t\t\tIntroduza a segunda largura: ");
                 scanf("%f",&d);
                 printf("\n\t\t\tPerimetro >> %.2f\n",perimetro(z,x,h,d));
                 printf("______________________________________________________________");
                 printf("\n\t\tPressione a tecla enter, para voltar ao menu...");
                 getchar();}
                 break;
                 
                 case'6':{   printf("\n\t\t _____________");
                             printf("\n\t\t|             |");
                             printf("\n\t\t|    Area     |");
                             printf("\n\t\t|_____________|_______________________________________________");
                 printf("\n\t\t\t\tIntroduza o comprimento: ");
                 scanf("%d",&a);
                 printf("\t\t\t\tIntroduza a largura: ");
                 scanf("%d",&b);
                 printf("\n\t\t\tArea >> %.f\n",area(a,b));
                 printf("______________________________________________________________");
                 printf("\n\t\tPressione a tecla enter, para voltar ao menu...");
                 getchar();}
                 break;
                 
                 case'7':{   printf("\n\t\t _____________");
                             printf("\n\t\t|             |");
                             printf("\n\t\t| N. Seguinte |");
                             printf("\n\t\t|_____________|_______________________________________________");
                 printf("\n\t\t\t\tIntroduza um numero: ");
                 scanf("%d",&a);
                 printf("\n\t\t\tNumero Seguinte >> %d\n",a+1);
                 printf("______________________________________________________________");
                 printf("\n\t\tPressione a tecla enter, para voltar ao menu...");
                 getchar();}
                 break;
                 
                 case'8':{   printf("\n\t\t ______________");
                             printf("\n\t\t|              |");
                             printf("\n\t\t|   Quadrado   |");
                             printf("\n\t\t|______________|_______________________________________________");
                 printf("\n\t\t\t\tIntroduza um numero: ");
                 scanf("%d",&a);
                 printf("\n\t\t\tQuadrados ---->%.d\n",quadrado(a));
                 printf("______________________________________________________________");
                 printf("\n\t\tPressione enter, para voltar ao menu de opcoes...");
                 getchar();}
                 break;
                 
                  case '9' :{printf("\n\t\t _____________");
                             printf("\n\t\t|             |");
                             printf("\n\t\t|  Raiz Qad.  |");
                             printf("\n\t\t|_____________|_______________________________________________");
                            printf("\n\t\t\t\tIntroduza um numero: ");
                             scanf("%f",&a);
                            printf("\n\t\t\t\tRaiz --->%f\n",raiz(a));
                 printf("\n\t\t______________________________________________________________");
                 printf("\n\t\tPressione enter, para voltar ao menu de opcoes...");
                 getchar();}
                 break;
                 case 'i' :{ printf("\n\t\t _________");
                             printf("\n\t\t|         |");
                             printf("\n\t\t|  Idade  |");
                             printf("\n\t\t|_________|_______________________________________________");
                             printf("\n\t\t\tIntroduza o ano em que esta: ");
                 scanf("%d",&a);
                 printf("\n\t\t\tIntroduza o ano em que nasceu: ");
                 scanf("%d",&b);
                 printf("\n\t\t\t\tIdade --->%d\n",idade(a,b));
                 printf("\n\t\t______________________________________________________________");
                 printf("\n\t\tPressione enter, para voltar ao menu de opcoes...");
                 getchar();}
                 break;
                 
                 case's' :{printf("\n\t\t\t ---------------------------------");
                 printf("--ABANDONAR PROGRAMA--");
                 printf("\n\t\t\t -----------------------------");
                 printf("\n\t\t\t[Pressione 2 vezes 'ENTER', para 'SAIR' !!!]");
                 printf("\n\t\t\t---------------------------------");}
                 break;
                 default : {printf("\n\t\t\tOpcao Invalida");
                 printf("\n\t\t\t___________________________________");
                 printf("\n\t\t   Pressione ENTER, para voltar ao Menu");
                 printf("\n\t\t  _________________________________________");}
                 }
                 getchar();
                 }
                 while(menu !='9');
                 system("pause>>null");
                 }
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
