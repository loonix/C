#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define DIM 3
main()
{
      char galo[DIM][DIM]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
      int i,j;
      galo[0][0]='X';
      galo[1][1]='X';
      galo[0][2]='0';
      galo[2][2]='0';
      for(i=0;i<DIM;i++)
      {
                        for(j=0;j<DIM;j++)
                        printf("%c%c",galo[i][j],j==DIM-1?' ':'|');
                        if(i!=DIM-1)printf("\n-----------");
                        }
                        system("pause>>null");
                        }
