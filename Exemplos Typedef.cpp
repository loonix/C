#include<stdio.h>
#include<stdlib.h>
/*Exemplos de Definiçoes typedef*/
#define DIM 5.14 //dim vale 5.14
typedef int inteiro; // A palavra ineito passa a definir o tipo int
typedef char carater;//a palavra carater passa a definir o tipo vhar
typedef float virgulas_flutuantes; //A palavra virgulas_flutuantes
                                   //Passa a definir o tipo float
                                   
main()
{
      inteiro numero_inteiro=10; // numero_inteiro e do tipo int
      carater vale_caracter='p'; // vale_caractere e do tipo char
      virgulas_flutuantes virgulas=DIM; //virgulas e do tipo float
      
      system("color B1");
      printf("\n\n Exemplos para utilizar o typedef.\n");
      printf("\n ########################################\n");
      printf("\n O valor de DIM corresponde a 5.41 .\n");
      printf("\n O valor de numero_inteiro corresponde a %d .\n",numero_inteiro);
      printf("\n O valor de virgulas corresponde a %.2f .\n", DIM);
      
      printf("\n#######################################\n");
      system("pause>>null");
      }  
