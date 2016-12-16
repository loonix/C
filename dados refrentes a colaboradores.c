#include<stdio.h>
#include<conio2.h>
#include<string.h>
#include<stdlib.h>
main()
{
      FILE *arqfunc;
      int sexo;
      int codfunc,idade;
      float salario;
      arqfunc = fopen("FUNCIONA.txt","w");
      if(arqfunc ==NULL)
      {
                 printf("\n O FICHEIRO.txt NAO PODE SER CRIADO.");
                 printf("\n Erro grave no sistema!!! premir qualquer tecla....");
                 getch();
                 }
                 else
                 {
                     system("cls");
                     system("color 1F");
                     do{
                                   textbackground (BLUE);
                                   textcolor(YELLOW);
                                   printf("\n\n\t $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
                                   printf("\n\t #### INSERIR DADOS REFERENTE A COLABORADORES ####");
                                   normvideo();
                                   textbackground( BLUE);
                                   printf("\n\n<>[para TERMINAR inserir numero negativo no codigo de funcionario]<>\n");
                                   printf("--------------------------------------------------------------------------");
                                   printf("\n\nIntroduza codigo de funcionario [max-3 digitos] : ");
                                   scanf("%d",&codfunc);
                                   if(codfunc>0)
                                   {
                                                printf("\n\n Digite o sexo [M ou F] : ");
                                                sexo = getche();
                                                printf("\n\n Introduza valor referente a idade : ");
                                                scanf("%d",&idade);
                                                printf("\n INtroduza o valor referente ao ordenado : ");
                                                scanf("%f",&salario);
                                                fprintf(arqfunc," Codigo  Sexo  Idade  Ordenado (euros)\n");
                                                fprintf(arqfunc,"-----------------------------------------\n");
                                                fprintf(arqfunc," %d       %c    %d       %2.f  \n\n",codfunc,sexo,idade,salario);
                                                }
                                                }while(codfunc>0);
                                                fclose(arqfunc);
                                                }
                                                system("pause>>null");
                                                }
