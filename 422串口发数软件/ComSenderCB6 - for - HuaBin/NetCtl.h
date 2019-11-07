// ---------------------------------------------------------------------------

#ifndef NetCtlH
#define NetCtlH
// ---------------------------------------------------------------------------
#pragma comment(lib,"ws2_32.lib")

#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <Classes.hpp>
// 网络协议
enum {
	TCP_SERVER = 1, // TCP/IP服务器
		TCP_CLIENT, // TCP/IP客户
		UDP, // UDP
		UDP_GROUP // UDP分组
	};

typedef struct {
	// 网络初始化（Open）时使用的变量
	char *LocalAddr; // 本机地址
	char *GroupAddr; // 本机组地址
	unsigned short Port; // 本机端口号
	int Protocol; // TCP_SERVER
	// TCP_CLIENT
	// UDP
	// UDP_GROUP
	// Open成功时的返回参数
	unsigned int Sock; // socket号

	// TCP通讯,本机为服务器，Open时需以下两个变量
	char ClientAddr[128]; // TCP通讯客户端地址，返回地址
	// 指向struct sockaddr_in
	int ClientAddrLength; // TCP通讯客户端地址长度

	// TCP通讯,本机为客户端,Open时需以下变量
	char *ServerAddr; // TCP通讯服务器端地址

	unsigned int TCPSock;
	unsigned long nBlockMode; //0:block, 1:no-block

} Struct_Mysock;

typedef struct {
	// UDP发送时,以下变量为接收端地址及端口号
	char *UDPSendAddr; // 发送端地址
	unsigned short UDPSendPort; // 端口号

} Struct_Mysock_ToAddr;

class CNetCtl {

	AnsiString sErr;

protected:

	bool OpenTCPServer(Struct_Mysock *mysock);
	bool OpenTCPClient(Struct_Mysock *mysock);
	bool OpenUDP(Struct_Mysock *mysock);
	bool OpenUDPGroup(Struct_Mysock *mysock);
	int TCPSend(Struct_Mysock *mysock, char*lpBuf, int nlen);
	int UDPSend(Struct_Mysock *mysock, Struct_Mysock_ToAddr *mysock_toaddr,
		char*lpBuf, int nlen);
	int TCPRev(Struct_Mysock *mysock, char*lpbuf, int nlen);
	int UDPRev(Struct_Mysock *mysock, char*lpBuf, int nlen);

public:
	CNetCtl();
	virtual ~CNetCtl();
	// 网络通讯函数
	bool Initail();
	bool Socket_Open(Struct_Mysock *mysock);
	bool Socket_Accept(Struct_Mysock *mysock);
	int Socket_Send(Struct_Mysock *mysock, Struct_Mysock_ToAddr *mysock_toaddr,
		char*lpBuf, int nlen);
	int Socket_Recv(Struct_Mysock *mysockchar, char *lpbuf, int nlen);
	void Socket_Close(Struct_Mysock *mysock);
	void Socket_ClientClose(Struct_Mysock *mysock);

	AnsiString GetErr() {
		return sErr;
	};
};

#endif
