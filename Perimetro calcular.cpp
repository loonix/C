#include <stdio.h>
#include <stdlib.h>
main()
{
      float Perim, c, l, area;
      printf("\n\n\nCalculo do Perimetro de um rectangulo");
      printf("\n\nIntroduza o comprimento :");
      scanf("%f",&c);
      printf("Itroduza a largura :");
      scanf("%f",&l);
      Perim = (c+l)+(c+l);
      area = (c*l);
      printf("O Perimetro e :%.fm\n",Perim);
      printf("A Area e :%.f\n",area);
      system("pause");
      }
