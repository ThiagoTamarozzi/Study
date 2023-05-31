#include <stdio.h>

int main () {
	
	printf("********************************************************\n");
	printf("* Bem vindo ao advinhas game o joguinho da adivinhacao *\n");
	printf("********************************************************\n");

	int secretnumber = 42;
	int chute;
	
	for(int i = 1; i<= 3; i++){
		printf("Tentativa %d de 3\n", i);
		printf("Qual e o seu chute ? ");
		scanf("%d", &chute);
		printf("Seu chute foi %d!\n", chute);

		int acertou = (chute == secretnumber);
	

		if (acertou) {
	
			printf("Parabens! nao fez mais que a obrigacao\n");
			
			break;
		} 
	
		else {
			int maior = chute > secretnumber;	
			if (maior) {
				printf("Seu chute foi maior que o numero secreto.\n");
		
			} else {
				printf("Seu chute foi menor que o numero secreto.\n");
		
			}
		}
	
		
	}
	printf("Fim de Jogo!\n");
}


