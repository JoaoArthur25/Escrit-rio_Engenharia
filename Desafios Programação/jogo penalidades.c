#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define cantoSuperiorEsquerdo 1
#define cantoInferiorEsquerdo 2
#define centro 3
#define cantroSuperiorDireito  4
#define cantoSuperiorDireito   5

void jogo();

int main()
{
	jogo();
	return 0;
                                                          
}                                                          
void jogo(){
	
	char nomeEquipe [100];
	int equipeInicial;
	int chutesJogador = 5, chutesMaquina = 5;
	int escolha, contadorJogador = 0, contadorMaquina = 0;
	int posChuteJogador, posDefesaJogador, posChuteMaquina, posDefesaMaquina;
	int opcaoFinalJogo = 0;
	srand(time(NULL));
    system("cls||clear");
    
	printf("Vao comecar as penalidades! Cada equipe tera 5 chances.\n");         
	printf("Insira o nome de sua equipe: ");
    fflush(stdin);
    gets(nomeEquipe);
    equipeInicial = rand() % 5 + 1;
    printf("As equipes que irao disputar sao: %s e a equipe Maquina!\n\n",nomeEquipe);
	sleep(1);      
	 
        while(chutesJogador > 0 || chutesMaquina > 0){
        
        if(equipeInicial == 0){
        
        sleep(4);
        system("cls||clear");
        printf("Hora de chutar!\n  Escolha um lado para chutar:\
		1. Canto Superior Esquerdo.\
        2. Canto Inferior Esquerdo.\
		   3. Centro.\
		                4. Canto Superior Direito.\
	        5. Canto Inferior Direito.\n");
	        
	     scanf("%d",&posChuteJogador);
	     posDefesaMaquina = rand() % 5 + 1;
	     
	     printf("O jogador chutou no ");
	     switch (posChuteJogador)
	     {
	     	case 1:
	     	printf(" canto superior esquerdo");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	break;
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
	     	
	     	case 2:
	     	printf(" canto inferior esquerdo");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 3:
	     	printf(" centro");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;	
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			    	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				    printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 4:
	     	printf(" canto superior direito");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 	
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 5:
	     	printf(" canto inferior direito");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			    default:
			    	
			 	printf("Invalido.\n");
				break;
			 
			 
		 }
		 chutesJogador--;
		 
		 if (contadorJogador > contadorMaquina + chutesMaquina) 
		 {
		 	printf("\n");
            printf("A equipe %s venceu por %d a %d!\n",nomeEquipe, contadorJogador, contadorMaquina);
            break;
         }
         
         sleep(4);
		system("cls||clear");
		 printf("*Hora de defender!*\n  Escolha um lado para pular:\
		1. Canto Superior Esquerdo.\
        2. Canto Inferior Esquerdo.\
		   3. Centro.\
		                4. Canto Superior Direito.\
	        5. Canto Inferior Direito.\n");
	        
	     scanf("%d",&posDefesaJogador);
	     posChuteMaquina = rand() % 5 + 1;
	     
	     printf("Voce pulou no ");
	     switch (posDefesaJogador)
	     {
	     	case 1:
	     	printf(" canto superior esquerdo");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
				 
				 if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
	     	
	     	case 2:
	     	printf(" canto inferior esquerdo");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 3:
	     	printf(" centro");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 4:
	     	printf(" canto superior direito");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 5:
	     	printf(" canto inferior direito");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina== 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			    default:
			 
			 	printf("Invalido.\n");
				break;
			 
			 
		 }
		 chutesMaquina--;
		 
		 if (contadorMaquina > contadorJogador + chutesJogador) 
		    {
		        printf("\n");	
                printf("A equipe da Maquina venceu por %d a %d!\n", contadorJogador, contadorMaquina);
                 break;
            }
	
       	if (chutesJogador == 0 && chutesMaquina == 0 && contadorJogador == contadorMaquina){
       		
        printf("Hora das cobrancas alternadas!\n");
        
        while(contadorJogador == contadorMaquina){
        
        sleep(4);
        system("cls||clear");
        printf("Hora de chutar!\n  Escolha um lado para chutar:\
		1. Canto Superior Esquerdo.\
        2. Canto Inferior Esquerdo.\
		   3. Centro.\
		                4. Canto Superior Direito.\
	        5. Canto Inferior Direito.\n");
	        
	     scanf("%d",&posChuteJogador);
	     posDefesaMaquina = rand() % 5 + 1;
	     
	     printf("O jogador chutou no ");
	     switch (posChuteJogador)
	     {
	     	case 1:
	     	printf(" canto superior esquerdo");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	break;
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
	     	
	     	case 2:
	     	printf(" canto inferior esquerdo");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 3:
	     	printf(" centro");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;	
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			    	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				    printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 4:
	     	printf(" canto superior direito");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 	
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 5:
	     	printf(" canto inferior direito");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			    default:
			    	
			 	printf("Invalido.\n");
				break;
			  
		 }
		 
        
         sleep(4);
		system("cls||clear");
		 printf("*Hora de defender!*\n  Escolha um lado para pular:\
		1. Canto Superior Esquerdo.\
        2. Canto Inferior Esquerdo.\
		   3. Centro.\
		                4. Canto Superior Direito.\
	        5. Canto Inferior Direito.\n");
	        
	     scanf("%d",&posDefesaJogador);
	     posChuteMaquina = rand() % 5 + 1;
	     
	     printf("Voce pulou no ");
	     switch (posDefesaJogador)
	     {
	     	case 1:
	     	printf(" canto superior esquerdo");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
				 
				 if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
	     	
	     	case 2:
	     	printf(" canto inferior esquerdo");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 3:
	     	printf(" centro");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 4:
	     	printf(" canto superior direito");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 5:
	     	printf(" canto inferior direito");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina== 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			    default:
			 
			 	printf("Invalido.\n");
				break;
			 
			 
		 }
		  if (contadorJogador > contadorMaquina) 
		 {
		 	printf("\n");
            printf("A equipe %s venceu por %d a %d!\n",nomeEquipe, contadorJogador, contadorMaquina);
            break;
         }
         
		 if (contadorMaquina > contadorJogador) 
		    {
		        printf("\n");	
                printf("A equipe da Maquina venceu por %d a %d!\n", contadorJogador, contadorMaquina);
                 break;
            }
            
        }
     }
 }
	
	else
	{
		sleep(4);
		system("cls||clear");
		printf("Hora de defender!\n  Escolha um lado para pular:\
		1. Canto Superior Esquerdo.\
        2. Canto Inferior Esquerdo.\
		   3. Centro.\
		                4. Canto Superior Direito.\
	        5. Canto Inferior Direito.\n");
	        
	     scanf("%d",&posDefesaJogador);
	     posChuteMaquina = rand() % 5 + 1;
	     
	     printf("Voce pulou no ");
	     switch (posDefesaJogador)
	     {
	     	case 1:
	     	printf(" canto superior esquerdo");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
				 
				 if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
	     	
	     	case 2:
	     	printf(" canto inferior esquerdo");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 3:
	     	printf(" centro");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 4:
	     	printf(" canto superior direito");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 5:
	     	printf(" canto inferior direito");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina== 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			    default:
			 
			 	printf("Invalido.\n");
				break;
			 
		 }
		 chutesMaquina--;
		 
		 if (contadorMaquina > contadorJogador + chutesJogador) 
		 {
		 	printf("\n");
            printf("A Maquina venceu por %d a %d!\n", contadorJogador, contadorMaquina);
            break;
         }
            
		 
		 sleep(4);
		 system("cls||clear");
		 printf("Hora de chutar!\n  Escolha um lado para chutar:\
		1. Canto Superior Esquerdo.\
        2. Canto Inferior Esquerdo.\
		   3. Centro.\
		                4. Canto Superior Direito.\
	        5. Canto Inferior Direito.\n");
	        
	     scanf("%d",&posChuteJogador);
	     posDefesaMaquina = rand() % 5 + 1;
	     
	     printf("O jogador chutou no ");
	     switch (posChuteJogador)
	     {
	     	case 1:
	     	printf(" canto superior esquerdo");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	break;
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
	     	
	     	case 2:
	     	printf(" canto inferior esquerdo");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 3:
	     	printf(" centro");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;	
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			    	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				    printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 4:
	     	printf(" canto superior direito");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 	
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 5:
	     	printf(" canto inferior direito");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			    default:
			    	
			 	printf("Invalido.\n");
				break;
			 
			 
		 }
		 chutesJogador--;
		 
		 if (contadorJogador > contadorMaquina + chutesMaquina) 
		    {	
		    
		        printf("\n");
                printf("%s venceu por %d a %d!\n", nomeEquipe, contadorJogador, contadorMaquina);
                 break;
            }
         
         if (chutesJogador == 0 && chutesMaquina == 0 && contadorJogador == contadorMaquina) 
		   {
		   	   printf("\n");
               printf("Hora das cobrancas alternadas!\n");
               
               while(contadorJogador == contadorMaquina){
               	sleep(4);
		        system("cls||clear");
		        printf("Hora de defender!\n  Escolha um lado para pular:\
		1. Canto Superior Esquerdo.\
        2. Canto Inferior Esquerdo.\
		   3. Centro.\
		                4. Canto Superior Direito.\
	        5. Canto Inferior Direito.\n");
	        
	     scanf("%d",&posDefesaJogador);
	     posChuteMaquina = rand() % 5 + 1;
	     
	     printf("Voce pulou no ");
	     switch (posDefesaJogador)
	     {
	     	case 1:
	     	printf(" canto superior esquerdo");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
				 
				 if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
	     	
	     	case 2:
	     	printf(" canto inferior esquerdo");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 3:
	     	printf(" centro");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 4:
	     	printf(" canto superior direito");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 5:
	     	printf(" canto inferior direito");
	     	if (posChuteMaquina == 1)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posChuteMaquina == 2)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior esquerdo.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina== 3)
			 {
			 	printf(" e o jogador da maquina chutou no centro.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 4)
			 {
			 	printf(" e o jogador da maquina chutou no canto superior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posChuteMaquina == 5)
			 {
			 	printf(" e o jogador da maquina chutou no canto inferior direito.\n\n");
			 	
			 	if (posDefesaJogador != posChuteMaquina)
				 {                    
				    contadorMaquina++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			    default:
			 
			 	printf("Invalido.\n");
				break;
			 
		 }
		 
		 sleep(4);
		 system("cls||clear");
		 printf("Hora de chutar!\n  Escolha um lado para chutar:\
		1. Canto Superior Esquerdo.\
        2. Canto Inferior Esquerdo.\
		   3. Centro.\
		                4. Canto Superior Direito.\
	        5. Canto Inferior Direito.\n");
	        
	     scanf("%d",&posChuteJogador);
	     posDefesaMaquina = rand() % 5 + 1;
	     
	     printf("O jogador chutou no ");
	     switch (posChuteJogador)
	     {
	     	case 1:
	     	printf(" canto superior esquerdo");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	break;
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
	     	
	     	case 2:
	     	printf(" canto inferior esquerdo");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 3:
	     	printf(" centro");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;	
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			    	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				    printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				 	contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 4:
	     	printf(" canto superior direito");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 	
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 case 5:
	     	printf(" canto inferior direito");
	     	if (posDefesaMaquina == 1)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 
			 else if (posDefesaMaquina == 2)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior esquerdo.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 3)
			 {
			 	printf(" e o goleiro da maquina permaneceu no centro.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 4)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto superior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			 else if (posDefesaMaquina == 5)
			 {
			 	printf(" e o goleiro da maquina pulou para o canto inferior direito.\n\n");
			 	
			 	if (posChuteJogador != posDefesaMaquina)
				 {                   
				    contadorJogador++;
				 	printf("%s %d | %d Maquina",nomeEquipe, contadorJogador, contadorMaquina);
				 }
				 else
				 {
				 	printf("%s %d | %d Maquina",nomeEquipe,contadorJogador, contadorMaquina);
				 }
			 	
			 	break;
			 }
			    default:
			    	
			 	printf("Invalido.\n");
				break;
			 
			 
		 }
		  
		  if (contadorMaquina > contadorJogador) 
		 {
		 	printf("\n");
            printf("A Maquina venceu por %d a %d!\n", contadorJogador, contadorMaquina);
            break;
         }
		 
		 if (contadorJogador > contadorMaquina) 
		    {	
		        printf("\n");
                printf("%s venceu por %d a %d!\n", nomeEquipe, contadorJogador, contadorMaquina);
                 break;
            }
	    }
    
      }
         
   }
}
	printf("Voce deseja jogar novamente? 1. Sim    2. Nao\n");
	scanf("%d",&opcaoFinalJogo);
	
	if(opcaoFinalJogo == 1){
		printf("Carregando...\n");
		sleep(3);
		jogo();
	}
	else if(opcaoFinalJogo == 2){
		printf("Fechando...");
		sleep(3);
		return 0;
	}
	else{
		printf("Opcao invalida, fechando...");
		sleep(3);
		return 0;
	}
	
}