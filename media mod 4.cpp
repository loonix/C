#include<stdio.h>
#include<stdlib.h>

main()
{
      float a = 8;
      float b = 9;
      float c = 7;
      float x = 4;
      float y = 5;
      float z = 6;
      float media;
      float media2;
      float soma;
      float media3;
      media = (a+b+c)/(3);
      media2 = (x+y+z)/(3);
      media3 = (media+media2)/(3);
      printf("\n\nA media dos numeros 8,9 e 7 e = %.f\n\n", media); 
      printf("\n\nA media dos numeros 4,5 e 6 e = %.f\n\n",media2);
      soma = (media+media2);
      printf("\n\nA soma das duas medias e = %.f\n\n",soma);
      
      printf("\n\nA media das duas medidas e = %.f\n\n",media3);
      system("pause>>null");
      }
