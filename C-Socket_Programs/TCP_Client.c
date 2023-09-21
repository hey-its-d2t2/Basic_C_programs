#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main()
{
	//create a socket
	int network_socket;
	network_socket = socket(AF_INET, SOCK_STREAM,0);
	
	//Specify an address for the socket
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9002);
	server_address.sin_addr.s_addr = INADDR_ANY;
	
	int connectio_status = (network_socket, (struct sockaddr *) &server_address, sizeof(server_address));
	
	if(connectio_status == -1)
	{
		printf("There was an error making a connectio to the remote socket !! \n\n");
	}
	
	//recive data from the server
	char server_response[256];
	recv(network_socket, &server_response, sizeof(server_response),0);
	
	//print the server response
	printf("The server sent the data : %s\n\n",server_response);
	
	//close the socket
	//close(network_socket);
	
	return 0;
}
