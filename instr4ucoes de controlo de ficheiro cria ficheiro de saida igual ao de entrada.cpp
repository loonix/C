#include<stdlib.h>
#include<stdio.h>

/* Funcoes "fguets" e "fputs" com recuso a ficheiro de texto criado previamente*/
 main()

{
    
    char ch[1001];   //vector ch do tipo char com 1001 elementos
    FILE *in, *out;   //dois apontadores para file (in e out)
  
    
/*####################### Inicio de teste de erros ########################*/
    
    
    if((in = fopen("entrada.txt", "rt")) == NULL)
    {printf("Impossivel abrir o ficheiro de entrada.txt.");
    return 0;
    
}

           if((out = fopen("saida.txt", "wt")) == NULL)
           
           {
                   
           printf("Impossivel abrir ficheiro de saida.txt.");
           return 0;
           
           }
      
/* #######################Fim de teste de erros ##########################*/
        
while((fgets(ch, 1000, in)) != NULL)    //le linha de textp de "entrada.txt"
fputs(ch, out);     // escreve linha de texto no "saida.txt"
fclose(in);  //fecho
fclose(out);  //fecho
//return(0);
system("pause>>null");}
