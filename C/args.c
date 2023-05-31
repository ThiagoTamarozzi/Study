#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int i;
	char *ip;
	ip = argv[1];

	if(argc<2){

		printf("Modo de uso: ./args 192.168.0 \n");

	} else {
	for(i=0;i<=10;i++)
	{
		printf("Varrendo Host %s.%i\n",ip,i);
	}
	}
}
