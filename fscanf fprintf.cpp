#include <stdio.h>
#include <stdlib.h>
main()
{
      float distancia, tempo, velocidade;
      FILE *in, *out; //dois apontadores tipo file (ficheiros)
      
      /* Teste de Segurança */
      
if((in = fopen("entrada.txt", "rt")) == NULL)
{
       printf("Impossivel abrir o ficheiro entrada.txt .");
       return;
       }
       if((out = fopen("saida.txt", "wt")) = NULL)
       {
               printf("Impossivel abrir o ficheiro saida.txt .");
               return;
               }
               
     /* Fim do teste de segurança */
     
//leitura do ficheiro externo, ja criado...
fscanf(in, "%f%f", &distancia, &tempo);
//fim da leitura do ficheiro externo
velocidade = distancia / tempo; // processamento.

//escrita no ficheiro de saida
fprintf(out, "Distancia precorrida: %10.2f km\n", distancia);
fprintf(out, "Tempo decorrido: 10.2f h\n", tempo);
fprintf(out, "Velocidade Media: %10.2f km/h\n", velocidade);
fclose(in);//fecho do ficheiro
fclose(out);//fecho do ficheiro

printf("\n\n\t\t O ficheiro \"saida.txt\" ja' foi criado....\n\n");
printf("\n\n\t\t Verifique a sua existencia na pasta onde gravou os\n");
printf("\n\n\t\t ficheiros relativos a este exercicio");
system("pause>>null");}
