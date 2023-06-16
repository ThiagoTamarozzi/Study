#include <stdio.h>

int main () {

        printf("********************************************************\n");
        printf("* Bem vindo ao joguinho da adivinhacao *\n");
        printf("********************************************************\n");

        int secretnumber = 42;

        int chute;
        int ganhou = 0;
        int tentativas = 1;

        while(1) {
                printf("Tentativa %d\n", tentativas);
                printf("Qual e o seu chute ? ");

                scanf("%d", &chute);
                printf("Seu chute foi %d\n", chute);

                if(chute < 0) {
                        printf("Voce nao pode chutar numeros negativos!\n");
                        continue;
                }

                int acertou = (chute == secretnumber);
                int maior = chute > secretnumber;


                if (acertou) {

                        printf("Parabens! nao fez mais que a obrigacao\n");

                        break;
                } 

                else if (maior) {
                        printf("Seu chute foi maior que o numero secreto.\n");

                } 

                else {
                        printf("Seu chute foi menor que o numero secreto.\n");

                }

                tentativas++;

        }
        printf("Fim de Jogo!\n");
        printf("Voce acertou em %d tentativas!", tentativas);
}


