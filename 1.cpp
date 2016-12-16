Case'2' :printf("\n\t\t-- ESCOLHEU A OPCAO SUBTRAIR --");
printf("\n\t\t\tIntroduza o primeiro operando");
scanf("%d",&a);
printf("\t\t\tIntroduza o segundo operando: "):
scanf("%d",&b);
print("\n\t\t\tSubtraccao Total --->%d\n",subtrair(a,b));
printf("\n\t\t------------------------");
printf("\n\t\tPressione enter, para voltar ao menu de opcoes...");
getchar();}
break;

case'3':{printf("\n\t\t-- ESCOLHEU A OPCAO MULTIPLICAR --");
printf("\n\t\t\tIntroduza o primeiro operando: ");
scanf("%d",&a);
printf("\t\t\tIntroduza o segundo operando: ");
scanf("%d",&b);
printf("\n\t\t\tMultiplicacao Total ---->%d\n",multiplicar(a,b));
printf("-----------------------------");
printf("\n\t\tPressione enter, para voltar ao menu de opcoes...");
getchar();}
break;

case'4':{printf("\n\t\t-- ESCOLHEU A OPCAO DIVIDIR --");
printf("\n\t\t\tIntroduza o primeiro operando: ");
scanf("%d",&a);
printf("\t\t\tIntroduza o segundo operando: ");
scanf("%d",&b);
printf("\n\t\t\tDivisao Total ---->%d\n",dividir(a,b));
printf("-----------------------------");
printf("\n\t\tPressione enter, para voltar ao menu de opcoes...");
getchar();}
break;

case'5' :{printf("\n\t\t\t ================================");
printf("ABANDONAR PROGRAMA ..TCHAUZINHO !!!");
printf("\n\t\t\t ================================");
printf("\n\t\t\t[Pressione 2 vezes 'ENTER', para 'SAIR' !!!]");
printf("\n\t\t\t---------------------------------");
break;
default : {printf("\n\t\t\tOPCAO INVALIDA!!!");
printf("\n\t\t\t---------------------------------");
printf("\n\t\t   Pressione ENTER, para voltar ao MENU de OPCOES");
printf("\n\t\t  ----------------------------------");}
}
getchar();
}
while(menu !='5');
system("pause>>null");
}
