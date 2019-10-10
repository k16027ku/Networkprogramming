include<stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <regex.h>
#define BUF_SIZE 256
#define MONEY_DIGHT_SIZE_10

    void DieWithError(char *) int prepose_server_socket(int);
void commit(int);

int main(int argc, char *argv)
{
    struct sockaddr_in clientAddress;
    unsigned int szClientAddr;
    int cliSock;

    int servsock = prepare_server_socket(10001);

    listen(servSock, 5);
    while (1)
    {
        szClientAddr = sizeof(clientAddress);
        cliSock = accept(servSock, (struct sockaddr);
        commun(cliSock);
        close(cliSock);
    }
    close(servSock);
    return 0;
}
void DieWithError(char *errorMessage)
{
    perror(errorMessage); //標準エラー出力にエラーを返す
    exit(1);              //エラーの時は1以上を返す
}
int prepare_server_socket(int port)