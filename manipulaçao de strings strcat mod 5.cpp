#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
     char nome[81], autor_programa[100]="Autor do Programa: ";
     
     printf("\nPor favor introduza o seu nome ate 80 caracteres: ");
     gets(nome); 
     strcat(autor_programa,nome);  
     printf("\n%s ",autor_programa);
     
     system("pause>>null");
    
       }
