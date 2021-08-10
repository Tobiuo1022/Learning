#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(void) {
	struct sockaddr_in server;
	int buf_size = 80;
	char buf[buf_size];
	
	memset((char *)&server, 0, sizeof(server));
	server.sin_family = AF_INET;
	server.sin_port = htons(5320);
	server.sin_addr.s_addr = inet_addr("127.0.0.1");

	int server_soc = socket(AF_INET, SOCK_STREAM, 0);
	connect(server_soc, (struct sockaddr *)&server, sizeof(server));
	fgets(buf, buf_size, stdin);
	send(server_soc, buf, strlen(buf), 0);
	close(server_soc);
	return 0;
}
