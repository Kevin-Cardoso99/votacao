#include <stdio.h>

#include <stdlib.h>

#include <locale.h>
  
  
  
  
  //variaveis
  int vJoao = 0, vMaria = 0, vZe = 0, vVotoNulo = 0, vInvalido = 0;
  int pZureta = 0, pGomes = 0, pVotoNulo = 0, pInvalido = 0;
  
  int main(){
  	
  	setlocale(LC_ALL, "Portuguese");
  	int opcao_menu = 0;
  	int opcao_vereador = 0 , opcao_prefeito = 0;
  	
  	printf("MENU\n");
  	printf("1 - VOTAR \n");
  	printf("2 - APURAR OS VOTOS \n");
  	printf ("3 - SAIR \n");
  	scanf ("%i", &opcao_menu);
  	fflush(stdin);
  	
  	switch (opcao_menu)
    {
	
  	case 1:
  	
  	printf("VOTAÇÃO VEREADOR \n");
  	printf("111 - Para Vereador Joao do frete\n");
  	printf("222 - Para Vereador Maria da Pamonha\n");
  	printf("333 - Para Vereador Ze da Farmacia\n");
  	printf("444 - Para Voto Nulo\n");
  	scanf ("%i", &opcao_vereador);
  	fflush(stdin);
  	switch (opcao_vereador)
  	{
  	 case 111:
  	 	printf("Voto confirmado em Vereador Joao do Frete\n");
  	 	vJoao = vJoao + 1;	
  	 	
  	 	break;
  	 case 222:
  	 	printf("Voto Confirmado em Vereador Maria da Pamonha\n");
  	 	vMaria = vMaria + 1;
  	 	break;
  	 case 333:
  	 	printf("Voto confirmado em Vereador Ze Farmacia\n");
  	 	vZe = vZe + 1;
  	 	break;
  	 case 444:
  	 	printf("Voto Nulo\n");
  	 	vVotoNulo = vVotoNulo + 1;
  	 	break;
  	 default:
  	 	printf("Voto Invalido\n");
  	 	vInvalido = vInvalido + 1;
  	 	break;
}
printf("Pressione Enter para continuar...");
fflush(stdin);
getchar();

printf("VOTAÇÃO PREFEITO\n");
printf("11 - Para Pr. Dr. Zureta\n");
printf("22 - Para Pr. Senhor Gomes\n");
printf("44 - Para Voto Nulo\n");
scanf("%i", &opcao_prefeito);
fflush(stdin);
switch(opcao_prefeito)
{
  case 11:
  	printf("Voto confirmado em Prefeito Zureta\n");
   	pZureta = pZureta + 1;
   	break;
   	
  case 22:
  	printf("Voto Confirmado em Prefeito Gomes\n");
  	pGomes = pGomes + 1;
  	break;
  	
  case 44:
   	printf ("Voto Nulo\n");
   	pVotoNulo = pVotoNulo + 1;
   	break;
   	
  default:
  	printf("Voto Inválido\n");
  	pInvalido = pInvalido + 1;
  	break;
  	
}
printf("Pressione Enter para Continuar ... ");
getchar();
fflush(stdin);
main();
break;

case 2:
	printf("APURAÇÃO DE VOTOS\n");
	printf("VEREADORES\n");
	printf("Vereador 111: %d votos.\n", vJoao);
	printf("Vereador 222: %d votos.\n", vMaria);
	printf("Vereador 333: %d votos.\n", vZe);
	printf("Nulo 444: %d votos.\n", vVotoNulo);
	printf("Invalidos %d votos .\n",vInvalido);
	printf("PREFEITOS\n");
	printf("Prefeito 11: %d votos.\n", pZureta);
	printf("Prefeito 22: %d votos.\n", pGomes);
	printf("Nulo 44: %d votos.\n",pVotoNulo);
	printf("Invalidos %d votos.\n",pInvalido);
	getchar();
	main();
	break;
	
case 3:
	printf("Finalizando o progrma ...");
	break;
default:
    printf("erro tente novamente");
	getchar(); //system("pause")
	main();
	break;
	
	
	
	
	
	



  	 
  }
  
  	
  	
	  
  	
  	
  	
  	
  }
