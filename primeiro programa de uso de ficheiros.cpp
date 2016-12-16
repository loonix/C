#include<stdio.h>
#include<stdlib.h>//para a funçao EXIT
//primeiro exemplo de uso de ficheiros

int main()
{
    FILE *fp;//ponteiro para ficheiro >> file
    char string[100];//string com 100 elementos
    int i;//variavel de controlo de ciclo for
    
    /*"arquivo.txt" >> nome do ficheiro*/
    /*"v" >> abrir ficheiro de texto para gravaçao*/
    fp = fopen("arquivo.txt","w");//ficheiro ASCII para escrita
    
    if(!fp)// se... fp == NULL ou fp=0
    {printf("Erro na abretura do ficheiro");
    exit(0);} // Devolve "Falso" (ou zero) se acontecer algum erro na abretura do ficheiro
    printf("Introduza uma string para ser gravada no ficheiro: ");
    gets(string);
    
    for(i=0; string[i]; i++)
    putc(string[i], fp); // grava a string, caracter a caracter
    
    fclose(fp);//fecha 
    return 0; // se utilizar-mos o return... o  .EXE Fecha Apos executar
}
