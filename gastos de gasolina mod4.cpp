#include<stdio.h>
#include<stdlib.h>
main()
{
      float horas,vel_media,dist,litros;
      printf("Introduza tempo da viagem : ");
      scanf("%f", &horas);
      printf("Introduza velocidade media : ");
      scanf("%f", &vel_media);
      dist = vel_media*horas;
      litros = (12/dist);
      printf("O Consumo medio e de :%f ",litros);
      system("pause>>null");}
