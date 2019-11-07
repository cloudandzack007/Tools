// ---------------------------------------------------------------------------

#ifndef NetCtlH
#define NetCtlH
// ---------------------------------------------------------------------------
#pragma comment(lib,"ws2_32.lib")

#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <Classes.hpp>
// ����Э��
enum {
	TCP_SERVER = 1, // TCP/IP������
		TCP_CLIENT, // TCP/IP�ͻ�
		UDP, // UDP
		UDP_GROUP // UDP����
	};

typedef struct {
	// �����ʼ����Open��ʱʹ�õı���
	char *LocalAddr; // ������ַ
	char *GroupAddr; // �������ַ
	unsigned short Port; // �����˿ں�
	int Protocol; // TCP_SERVER
	// TCP_CLIENT
	// UDP
	// UDP_GROUP
	// Open�ɹ�ʱ�ķ��ز���
	unsigned int Sock; // socket��

	// TCPͨѶ,����Ϊ��������Openʱ��������������
	char ClientAddr[128]; // TCPͨѶ�ͻ��˵�ַ�����ص�ַ
	// ָ��struct sockaddr_in
	int ClientAddrLength; // TCPͨѶ�ͻ��˵�ַ����

	// TCPͨѶ,����Ϊ�ͻ���,Openʱ�����±���
	char *ServerAddr; // TCPͨѶ�������˵�ַ

	unsigned int TCPSock;
	unsigned long nBlockMode; //0:block, 1:no-block

} Struct_Mysock;

typedef struct {
	// UDP����ʱ,���±���Ϊ���ն˵�ַ���˿ں�
	char *UDPSendAddr; // ���Ͷ˵�ַ
	unsigned short UDPSendPort; // �˿ں�

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
	// ����ͨѶ����
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
