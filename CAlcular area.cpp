#include <stdio.h>
#include <stdlib.h>
main()
{
      float Atotal;
      float c;
      float l;
      float h;
      float Volume = 5;
      float Capacidade = 4;
      float lata;
      float n_lata;
      float custo;
      float preco = 50;
      printf("\n\n\nCalculo do Custo da Pintura de 4 Paredes + Tecto !!");
      printf("\n\nIntroduza o comprimento :");
      scanf("%f",&c);
      printf("Introduza a altura :");
      scanf("%f",&h);
      printf("Itroduza a largura :");
      scanf("%f",&l);
      Atotal = (c*h)+(c*h)+(l*h)+(l*h)+(c*l);
      lata = (Volume * Capacidade);
      n_lata = (Atotal/lata);
      custo = (n_lata*preco);
      printf("O valor e :%.f\n",custo);
      system("pause");
      }
