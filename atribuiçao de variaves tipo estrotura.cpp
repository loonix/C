#include<stdio.h>
#include<stdlib.h>

/*Atribuindo estruturas
Se duas varaveis sao do mesmo tipo, podem-se atribuir a uma outra .
Neste caso, todos os elementos da estrutura no lado esquerdo da atribuição
teceberao os valores dos elementos correspondentes da estrutura do lado direito.
Por exmeplo, este programa abtrubui o valor da estrotura variavel_1 para a estrotura
variavel_2 e exibe o resultado 10 98.6*/

main()
{
      struct exemplo{
             int i;
             float d;
             } variavel_1, variavel_2; //Definidas duas variaveis
                                      //Do tipo struct exemplo...
             
      variavel_1.i= 10;
      
      variavel_1.d=98.6;
      
      variavel_2 = variavel_1; //atritui uma estrotura a outra
      
      printf("%d %3.1f", variavel_2.i, variavel_2.d);
      system("pause>>null");}
