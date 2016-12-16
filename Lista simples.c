







#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


typedef struct Temp
        {
               int info;
               struct Temp *prox;
               }TNODO;
               
               
               TNODO *inicio=NULL;
               
//----------------------------------

void CriaLista()
{
     inicio = NULL;
     }
     
//---------------------------------




int Insere(int dado)
{
    TNODO *p;
    
    p= (TNODO *) malloc(sizeof(TNODO));
    if(p==NULL)
    {
               printf("Erro de alocação\n");
               return 0;
               }
               
               p->info = dado;
               p->prox = NULL;
               
               if(inicio==NULL)
               inicio = p;
               else {
                    p->prox = inicio;
                    inicio = p;
                    }
                    return 1;
               }
               
//---------------------------------





int RemoveDoInicio()
{
    TNODO *ptr;
    
    if(inicio==NULL)
    return 0;
    else
    {
        ptr=inicio;
        inicio=inicio ->prox;
        free(ptr);
        return 1;
        }
        }
        
        
        
        
        void Imprime()
        {
             TNODO*ptr;
             
             if(inicio==NULL)
             {
                             printf("---fim da lista---\n\n");
                             return;
                             }
                             
                             
                             ptr=inicio;
                             while(ptr !=NULL){
                                       printf("Info = %d\n",ptr->info);
                                       ptr=ptr->prox;
                                       }
                                       printf("---Fim da lista---\n\n");
                                       }
                                       
                                       
                                       
                                       
                                       
                                       
                                       TNODO *BuscaDado(int dado)
                                       {
                                             TNODO *ptr;
                                             
                                             if(inicio==NULL)
                                             {
                                                             return NULL;
                                                             }
                                                             
                                                             
                                                             ptr=inicio;
                                                             while(ptr=NULL){
                                                                             if(ptr->info==dado)
                                                                             return(ptr);
                                                                             
                                                                             else ptr = ptr->prox;
                                                                             }
                                                                             return NULL;
                                                                             }
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
             int RemoveDado(int dado)
{
    TNODO *ptr, *antes;
    
    if (inicio==NULL)
    {
    return 0;
}
else
{
    ptr = inicio;
    antes = inicio;
    while (ptr!=NULL)
    {
    if (ptr->info == dado)
    {
                  if (ptr == inicio)
                  {
    inicio = inicio->prox;
    free(ptr);
    return 1;
}
else
{
    antes->prox = ptr->prox;
    free(ptr);
    return 1;
}
}
else
{
    antes = ptr;
    ptr = ptr->prox;
}
}
return 0;
}
}



main()
{
      int i, ret;
      TNODO *aux;
      
      
      
      CriaLista();
      
      
      for (i=1; i<10;i++)
          Insere(i*2);
      Imprime();
      getch();
      
      
      
      for(i=-2; i<=25;i++)
      {
                
                aux = BuscaDado(i);
                if (aux != NULL)
                printf("+++Encontrou o %d\n", aux->info);
                else printf("---Nao encontrou o %d\n", 1);
                }
                getch();
                
                printf("Antes da remocao do primeiro modo\n");
Imprime();
printf("Apos a remocao dos dois primeiros nodos\n");

RemoveDoInicio();
RemoveDoInicio();
Imprime();
getch();



printf("Remocao no meio da lidta\n");
for(i=-3; i<=21;i+=3)
{
          ret = RemoveDado(i);
          if (ret == i)
          printf("***Remove a %d\n",i);
          else printf("---Nao encontrou o %d\n",i);
          }
          
          printf("Apos a remocao\n");
          Imprime();
          getch();
          
          
          ret ==i;
          while (ret ==i);
{
          ret = RemoveDoInicio();
          }
          printf("Apos a remocao de todos os nodos\n");
          Imprime();
          
          system("pause>>null");
          }
          
