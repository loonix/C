#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
     char password1[9], password2[9];
     
     printf("\nintroduza uma password ate 8 caracteres: ");
     gets(password1); 
     printf("\nIntroduza novamente a sua password: ");
     gets(password2);
     if(strcmp(password1,password2)==0) printf("\nPASSWORD VALIDA!");
     else printf("\nPASSWORD NAO VALIDA!");

    
     system("pause>>null");
       }
