#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(void) {
	struct sockaddr_in server, client;
	int buf_size = 80;
	char buf[buf_size];
	
	memset((char *)&server, 0, sizeof(server));
	server.sin_family = AF_INET;
	server.sin_port = htons(5320);
	server.sin_addr.s_addr = htonl(INADDR_ANY);

	int server_soc = socket(AF_INET, SOCK_STREAM, 0);
	bind(server_soc, (struct sockaddr *)&server, sizeof(server));
	listen(server_soc, 1);
	
	socklen_t socklen = sizeof(client);
	int client_soc = accept(server_soc, (struct sockaddr *)&client, &socklen);
	recv(client_soc, buf, buf_size, 0);
	printf("%s\n", buf);

	close(server_soc);
	close(client_soc);
	return 0;
}
