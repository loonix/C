#include<stdio.h>
#include<stdlib.h>
//O programa a seguir abre um ficheiro já
//existente e le, carecter por caracter, ate que o
//final do arquivo seja attingido. Os 
//caracteres lidos sao apresentados no ecran.

int main()
{
    FILE *fp;
    char c;
    fp = fopen("arquivo_1.txt","r");// ficheiroASCII para leitura
    if(!fp)//se fp der erro por qualquer motivo....
    {
                printf("Erro na abretura do ficheiro...");
                exit(0);
                }
    while((c = getc(fp) ) != EOF) // enquanto nao chegar ao final do ficheiro
    printf("%c", c);//imprime o caracter lido
    fclose(fp);
    system("pause>>null");
}
