#include<stdlib.h>
#include<stdio.h>

main()
{
      struct nomecompleto
      {
             char primeiro[15];
             char meio[15];
             char ultimo[15];
             };
             
      struct pessoa 
      {
             struct nomecompleto nome;
             int idade;
             };
             
      struct pessoa ficha;
      
      printf("Introduza o primeiro nome: ");
      scanf("%s", &ficha.nome.primeiro);
      printf("Introduza o meio nome: ");
      scanf("%s", &ficha.nome.meio);
      printf("Introduza o seu sobrenome: ");
      scanf("%s", &ficha.nome.ultimo);
      printf("Introduza a sua idade: ");
      scanf("%d", &ficha.idade);
      printf("<><><><><><<>><<>><><><><><><>\n\n");
      printf("Nome Completo: %s %s %s\nIdade: %d anos\n",
      ficha.nome.primeiro, ficha.nome.meio, ficha.nome.ultimo, ficha.idade);
      system("pause>>null");}
      
