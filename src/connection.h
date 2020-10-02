/* DroidCam & DroidCamX (C) 2010-
 * https://github.com/aramg
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */
#include <stdint.h>

#ifndef __CONN_H__
#define __CONN_H__

#define INVALID_SOCKET -1
typedef int SOCKET;
typedef intptr_t SOCKET_PTR;

SOCKET Connect(const char* ip, int port);
void connection_cleanup();
void disconnect(SOCKET s);

SOCKET accept_connection(int port);
SOCKET CreateUdpSocket(void);
int SendRecv(int doSend, const char * buffer, int bytes, SOCKET s);
int RecvNonBlock(char * buffer, int bytes, SOCKET s);
int RecvNonBlockUDP(char * buffer, int bytes, SOCKET s);
int SendUDPMessage(SOCKET s, const char *message, int length, char *ip, int port);

#endif
