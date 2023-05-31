#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main (int argc, char *argv[]){

	if(argc <=1){
		printf("                       @@@@@@@@@@@@&&&\n");
		printf("	            @ @@@@@@@@@@@@@&&&&&&\n");
		printf("                  @@@@@@@@@@@@@@@@@&@&&&&&&&&\n");
		printf("                @@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&\n");
		printf("              @@@@@@@&@@@@@@@@@@@@@&&&&&&&&&&&&&&\n");
		printf("             @@@@@@@@&@&@@@@@@@@@@@&&&&&&&&&&&&&&&\n");
		printf("             @((((* .&@@@@@@@@@@@@@&&&&&&&&&&*  ,, \n");
		printf("            ##((((((((((((((((((((((((********,,,,\n");
		printf("     @@@@@@@##(((((((##60d7mrz(((((((********,,,, &&&&&&    @@\n");
		printf("@.@@@@@@@@@@/#57r4wh475(((((((((m0r1((**(*****,,,,&&&&&&&&&&&@\n");
		printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&\n");
		printf("  @@@&@@&@@@&@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&@&&&&&&&&&&&&&&\n");
		printf("      @@@@@@&&@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&%\n");
		printf("        @ @@@   @@@@@@@@@@@@@@@@@@@@@@&&&&&&&   @ @@@\n");
		printf("          Modo de uso: ./dnsstrawresolver 57r4wh475.com\n");
		return 0;
	} else {

		struct hostent *alvo = gethostbyname(argv[1]);

		if (alvo == NULL){

			printf("FOI DE ACE :/\n");

		} else { 

			printf("IP: %s\n",inet_ntoa(*((struct in_addr *)alvo->h_addr)));
		}
}
}
