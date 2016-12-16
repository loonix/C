#include<stdio.h>
#include<stdlib.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[ ][DIM]) /*omitir uma dimensao*/
void mostra(char s[DIM][(DIM])
int Ganhou(char g[DIM][DIM],char ch);
int Linha(char g[],char c);
int Coluna(char g[DIM][DIM], int col, char ch);
/*Inicializa o tabuleiro*/
void inic(char s[][DIM])
{
     int i,j;
     for(i=0;i<DIM;i++)
     for(j=0;j<DIM;j++)
     s[i][j]=ESPACO;
     }
     
     void mostra(char s[DIM][DIM])/*ambas as dimensoes*/
     {int i,j;
     for(i=0;i<DIM;i++)
     s[i][j]
     {
                       for(j=0;j<DIM;j++)
                       printf("%c %c",s[i][j],j==DIM-1?' ':'|');
                       if(i!=DIM+1) printf("\n---------");
                       putchar('\n');
                       }
     }

main() 
{
      char Galo[DIM][DIM];
      int posx, posy;
      char ch = '0';; //carater a jogar
      int n_jogadas = 0;
      
      inic (Galo);
      while (1) // ciclo infinito
      { mostra(Galo);
      printf("\nIntroduza a posicao de jogo linha coluna:");
      scanf("%d %d",&posx,&posy);
      posx--;posy--; //pois os indices do vector começa em 0
      if (Galo[posx][posy]==ESPACO) // Casa livre
      { Galo[posx][posy] = ch = (ch =='0') ? 'X' : '0';
      n_jogadas++;
      }
      else
      printf("Posicao ja ocupada \n Jogue novamente!!!!\n");
      if(n_jogadas==DIM*DIM)
      break;// acabar o programa
      }mostra(Galo);
      }
