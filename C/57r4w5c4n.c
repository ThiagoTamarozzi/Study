#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, char *argv[]){

	int meusocket;
	int conecta;

	int porta;
	int inicio = 0;
	int final = 65535;
	char *destino;
	destino = argv[1];

	if(argc <=1){
		printf("\n");
		printf("                       @@@@@@@@@@@@&&&\n");
		printf("	            @ @@@@@@@@@@@@@&&&&&&\n");
		printf("                  @@@@@@@@@@@@@@@@@&@&&&&&&&&\n");
		printf("                @@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&\n");
		printf("              @@@@@@@&@@@@@@@@@@@@@&&&&&&&&&&&&&&\n");
		printf("             @@@@@@@@&@&@@@@@@@@@@@&&&&&&&&&&&&&&&\n");
		printf("             @((((* .&@@@@@@@@@@@@@&&&&&&&&&&*  ,, \n");
		printf("            ##((((((((((((((((h34dmy57********,,,,\n");
		printf("     @@@@@@@##(((((((##60d7mrz(((((((********,,,, &&&&&&    @@\n");
		printf("@.@@@@@@@@@@/#57r4wh475(((((((((m0r1((**(*****,,,,&&&&&&&&&&&@\n");
		printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&\n");
		printf("  @@@&@@&@@@&@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&@&&&&&&&&&&&&&&\n");
		printf("      @@@@@@&&@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&%\n");
		printf("        @ @@@   @@@@@@@@@@@@@@@@@@@@@@&&&&&&&   @ @@@\n");
		printf("            =[ Modo de uso: ./portscan 192.168.0.1 ] \n");
		printf("            =[ 57r4w5c4n Version 1.0 | 60d7mrz     ] \n");


		return 0;
	} else {


	struct sockaddr_in alvo;
                printf("\n");
		printf("                       @@@@@@@@@@@@&&&\n");
                printf("                    @ @@@@@@@@@@@@@&&&&&&\n");
                printf("                  @@@@@@@@@@@@@@@@@&@&&&&&&&&\n");
                printf("                @@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&\n");
                printf("              @@@@@@@&@@@@@@@@@@@@@&&&&&&&&&&&&&&\n");
                printf("             @@@@@@@@&@&@@@@@@@@@@@&&&&&&&&&&&&&&&\n");
                printf("             @((((* .&@@@@@@@@@@@@@&&&&&&&&&&*  ,, \n");
                printf("            ##((((((((((((((((h34dmy57********,,,,\n");
                printf("     @@@@@@@##(((((((##60d7mrz(((((((********,,,, &&&&&&    @@\n");
                printf("@.@@@@@@@@@@/#57r4wh475(((((((((m0r1((**(*****,,,,&&&&&&&&&&&@\n");
                printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&\n");
                printf("  @@@&@@&@@@&@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&@&&&&&&&&&&&&&&\n");
                printf("      @@@@@@&&@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&%\n");
                printf("        @ @@@   @@@@@@@@@@@@@@@@@@@@@@&&&&&&&   @ @@@\n");
                printf("            =[ 57r4w5c4n Version 1.0 | 60d7mrz     ] \n");
                printf("\n");
		printf("......................................................................\n");
		printf("........................INICIANDO PORTASCAN...........................\n");
		printf("......................................................................\n");		
		printf("\n");

	for(porta=inicio;porta<final;porta++){


	meusocket = socket(AF_INET,SOCK_STREAM,0);
	alvo.sin_family = AF_INET;
	alvo.sin_port = htons(porta);
	alvo.sin_addr.s_addr = inet_addr(destino);

	conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);

	if(conecta == 0){
		printf("Port: %d | status | [OPEN] \n",porta);
		close(meusocket);
		close(conecta);
	} else {
		close(meusocket);
		close(conecta);
	}
        }
	}
}
