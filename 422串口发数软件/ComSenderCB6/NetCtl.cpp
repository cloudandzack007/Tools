// ---------------------------------------------------------------------------

//////////////////////////////////////////////////////////////////////
// ˵���� �������������socketʵ�֣�ʵ����TCP\UDP\UDP�鲥��������պͷ���
// ���еı�ɶ���������ʽ�����Ա������߳��н��в���
// author: cl 2006.07.24
//////////////////////////////////////////////////////////////////////
#pragma hdrstop

#include "NetCtl.h"

// ---------------------------------------------------------------------------

CNetCtl::CNetCtl( )
{
	Initail( );
}

CNetCtl::~CNetCtl( )
{

}

// ��ʼ������dll
bool CNetCtl::Initail( )
{
	WORD wVersionRequested;
	WSADATA wsaData;
	int err;

	wVersionRequested = MAKEWORD( 2, 2 );

	err = WSAStartup( wVersionRequested, &wsaData );
	if ( err != 0 )
	{
		sErr = "we could not find a usable WinSock DLL";
		return false;
	}
	return true;

}

// ����socket
bool CNetCtl::Socket_Open( Struct_Mysock * mysock )
{

	mysock->Sock = INVALID_SOCKET;

	switch ( mysock->Protocol )
	{
	case TCP_SERVER:
		return OpenTCPServer( mysock );
	case TCP_CLIENT:
		return OpenTCPClient( mysock );
	case UDP:
		return OpenUDP( mysock );
	case UDP_GROUP:
		return OpenUDPGroup( mysock );
	default:
		break;
	}

	return false;
}

bool CNetCtl::OpenTCPServer( Struct_Mysock * mysock )
{
	SOCKET sock, sockclient;
	// sockaddr TCPClientAddr;
	struct sockaddr_in sockaddr_server, myTCPClientAddr;

	ZeroMemory( & sockaddr_server, sizeof( sockaddr_in ) );

	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	if ( sock == INVALID_SOCKET )
	{
		sErr = "socket Error:" + IntToStr( WSAGetLastError( ) );
		closesocket( sock );
		return false;
	}

	sockaddr_server.sin_family = AF_INET; // Э��
	sockaddr_server.sin_port = htons( mysock->Port ); // �˿ں�

	if ( mysock->LocalAddr != NULL )
	{
		sockaddr_server.sin_addr.s_addr = inet_addr( mysock->LocalAddr );
	} // ���ص�ַ
	else
	{
		sockaddr_server.sin_addr.s_addr = htonl( INADDR_ANY );
	}
	if ( bind( sock, ( const SOCKADDR * ) &sockaddr_server,
		sizeof( sockaddr_server ) ) == SOCKET_ERROR )
	{
		sErr = "bind Error:" + IntToStr( WSAGetLastError( ) );
		closesocket( sock );
		return false;
	}

	ioctlsocket(sock, FIONBIO, &mysock->nBlockMode);

	if ( listen( sock, 5 ) == SOCKET_ERROR )
	{
		sErr = "listen Error:" + IntToStr( WSAGetLastError( ) );
		closesocket( sock );
		return false;
	}
	mysock->TCPSock = sock;
	/*
	 mysock->ClientAddrLength=sizeof(sockaddr);

	 //���տͻ���
	 sockclient = accept(sock, (sockaddr*)&myTCPClientAddr, &(mysock->ClientAddrLength) );
	 memcpy(&mysock->ClientAddr, inet_ntoa(myTCPClientAddr.sin_addr),
	 sizeof(inet_ntoa(myTCPClientAddr.sin_addr)) );

	 if (sockclient==INVALID_SOCKET)
	 {
	 sErr = "accept Error:" + IntToStr(WSAGetLastError());
	 closesocket(sock);
	 return false;
	 }

	 mysock->Sock=sockclient;
	 */
	return true;
}

// ���TCP���տͻ��˺���
bool CNetCtl::Socket_Accept( Struct_Mysock * mysock )
{
	SOCKET sockclient;
	struct sockaddr_in myTCPClientAddr;

	if ( mysock->Protocol != TCP_SERVER )
	{
		sErr = "�����Ͳ��ܽ��д˲���";
		return false;
	}
	mysock->ClientAddrLength = sizeof( sockaddr );

	// ���տͻ���
	sockclient = accept( mysock->TCPSock, ( sockaddr * ) &myTCPClientAddr,
		&( mysock->ClientAddrLength ) );
	memcpy( & mysock->ClientAddr, inet_ntoa( myTCPClientAddr.sin_addr ),
		sizeof( inet_ntoa( myTCPClientAddr.sin_addr ) ) );

	if ( sockclient == INVALID_SOCKET )
	{
		sErr = "accept Error:" + IntToStr( WSAGetLastError( ) );
		closesocket( mysock->TCPSock );
		return false;
	}

	mysock->Sock = sockclient;
	return true;

}

bool CNetCtl::OpenTCPClient( Struct_Mysock * mysock )
{
	SOCKET sock;
	// unsigned int   addr;
	struct sockaddr_in sockaddr_server;
	struct sockaddr_in sockaddr_client;

	ZeroMemory( & sockaddr_server, sizeof( sockaddr_server ) );

	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	if ( sock == INVALID_SOCKET )
	{
		closesocket( sock );
		return false;
	}
	sockaddr_client.sin_family = AF_INET;
	sockaddr_client.sin_port = 0;
	sockaddr_client.sin_addr.s_addr = inet_addr( mysock->LocalAddr );

	if ( bind( sock, ( const SOCKADDR * ) &sockaddr_client,
		sizeof( sockaddr_client ) ) == SOCKET_ERROR )
	{
		sErr = "bind Error:" + IntToStr( WSAGetLastError( ) );
		closesocket( sock );
		return false;
	}

	sockaddr_server.sin_family = AF_INET;
	sockaddr_server.sin_port = htons( mysock->Port );
	sockaddr_server.sin_addr.s_addr = inet_addr( mysock->ServerAddr );

	ioctlsocket(sock, FIONBIO, &mysock->nBlockMode);
	// ����
	if ( connect( sock, ( const SOCKADDR * ) &sockaddr_server,
		sizeof( sockaddr_server ) ) == SOCKET_ERROR )
	{
		sErr = "connect Error:" + IntToStr( WSAGetLastError( ) );
		closesocket( sock );
		return false;
	}
	mysock->Sock = sock;

	return true;
}

bool CNetCtl::OpenUDP( Struct_Mysock * mysock )
{
	SOCKET sock;
	struct sockaddr_in sockaddrs;

	ZeroMemory( & sockaddrs, sizeof( sockaddrs ) );

	sock = socket( AF_INET, SOCK_DGRAM, IPPROTO_UDP );
	if ( sock == INVALID_SOCKET )
	{
		sErr = "socket Error" + IntToStr( WSAGetLastError( ) );
		closesocket( sock );
		return false;
	}
	sockaddrs.sin_family = AF_INET; // Э��
	sockaddrs.sin_port = htons( mysock->Port ); // �˿ں�

	if ( mysock->LocalAddr != NULL )
	{
		sockaddrs.sin_addr.s_addr = inet_addr( mysock->LocalAddr );
	}
	else
	{
		sockaddrs.sin_addr.s_addr = htonl( INADDR_ANY );
	}

	if ( bind( sock, ( const SOCKADDR * ) &sockaddrs, sizeof( sockaddrs ) )
		== SOCKET_ERROR )
	{
		sErr = "bind Error:" + IntToStr( WSAGetLastError( ) );
		closesocket( sock );
		return false;
	}
	mysock->Sock = sock;
	return true;
}

bool CNetCtl::OpenUDPGroup( Struct_Mysock * mysock )
{
	SOCKET sock, sockM;
	struct sockaddr_in sockaddrs, groupaddrs;
	struct ip_mreq;
	int err = 0, optval = 0;
	unsigned long ulInterface;

	ZeroMemory( & sockaddrs, sizeof( sockaddrs ) );

	sock = WSASocket( AF_INET, SOCK_DGRAM, 0, NULL, 0,
		WSA_FLAG_MULTIPOINT_C_LEAF | WSA_FLAG_MULTIPOINT_D_LEAF |
		WSA_FLAG_OVERLAPPED );

	if ( sock == INVALID_SOCKET )
	{
		sErr = "WSASocket Error" + IntToStr( WSAGetLastError( ) );
		closesocket( sock );
		return false;
	}

	sockaddrs.sin_family = AF_INET; // Э��
	sockaddrs.sin_port = htons( mysock->Port ); // �˿ں�
	if ( mysock->LocalAddr != NULL )
	{
		sockaddrs.sin_addr.s_addr = inet_addr( mysock->LocalAddr );
	}
	else
	{
		sockaddrs.sin_addr.s_addr = htonl( INADDR_ANY );
	}
	if ( bind( sock, ( const SOCKADDR * ) &sockaddrs, sizeof( sockaddrs ) )
		== SOCKET_ERROR )
	{
		sErr = "bind Error:" + IntToStr( WSAGetLastError( ) );
		closesocket( sock );
		return false;
	}

	/* add  an IP group membership */
	ulInterface = inet_addr( mysock->LocalAddr );
	err = setsockopt( sock, IPPROTO_IP, IP_MULTICAST_IF,
		( char * ) &ulInterface, sizeof( ulInterface ) );
	if ( err == SOCKET_ERROR )
	{
		sErr = "setsockopt Error:" + IntToStr( WSAGetLastError( ) );
		closesocket( sock );
		return false;
	}
	// �������Լ�����
	err = setsockopt( sock, IPPROTO_IP, IP_MULTICAST_LOOP, ( char * ) &optval,
		sizeof( optval ) );
	if ( err == SOCKET_ERROR )
	{
		closesocket( sock );
		return false;
	}

	groupaddrs.sin_family = AF_INET; // Э��
	groupaddrs.sin_port = htons( mysock->Port ); // �˿ں�
	groupaddrs.sin_addr.s_addr = inet_addr( mysock->GroupAddr );

	sockM = WSAJoinLeaf( sock, ( const SOCKADDR * ) &groupaddrs,
		sizeof( groupaddrs ), NULL, NULL, NULL, NULL, JL_BOTH );

	if ( sockM == INVALID_SOCKET )
	{
		sErr = "WSAJoinLeaf Error:" + IntToStr( WSAGetLastError( ) );
		closesocket( sockM );
		closesocket( sock );
		return false;
	}

	mysock->Sock = sock;
	return true;
}

// ���緢��
// -1���ͳ��ȴ�����󳤶�
// -2����Э�����
// 0��ʾ���ͳɹ�
// ��������������
int CNetCtl::Socket_Send(
	Struct_Mysock *        mysock,
	Struct_Mysock_ToAddr * mysock_toaddr,
	char *                 lpBuf,
	int                    nlen )
{
	int iErrorCode = 0;

	switch ( mysock->Protocol )
	{
	case TCP_SERVER:
	case TCP_CLIENT:
		if ( TCPSend( mysock, lpBuf, nlen ) == -1 )
		{
			iErrorCode = GetLastError( );
		}
		break;
	case UDP:
	case UDP_GROUP:
		if ( nlen > SO_MAX_MSG_SIZE )
		{
			return -1;
		}
		else
		{
			if ( UDPSend( mysock, mysock_toaddr, lpBuf, nlen ) == -1 )
			{
				iErrorCode = GetLastError( );
			}
		}
		break;
	default:
		iErrorCode = -2;
		break;
	}

	return iErrorCode;
}

// TCP��ʽ�����ݷ���, ���ط��͵�����, ���С�ڵ���0��������
int CNetCtl::TCPSend(
	Struct_Mysock * mysock,
	char *          lpBuf,
	int             nlen )
{
	SOCKET sock;
	int ByteToSend;
	int nSend = 0;
	sock = mysock->Sock;
	if ( sock != INVALID_SOCKET )
	{
		while ( nSend < nlen )
		{
			ByteToSend = send( sock, ( lpBuf + nSend ), ( nlen - nSend ),
				NULL );
			if ( ByteToSend == SOCKET_ERROR || ByteToSend == 0 )
			{
				sErr = "send Error:" + IntToStr( WSAGetLastError( ) );
				return -1;
			}
			nSend += ByteToSend;
		}
		return nSend;
	}
	return -1;
}

// ------------------------------------------------------------------------------
// UDP���ݷ���
int CNetCtl::UDPSend(
	Struct_Mysock *        mysock,
	Struct_Mysock_ToAddr * mysock_toaddr,
	char *                 lpbuf,
	int                    nlen )
{
	SOCKET sock;
	int bytesend;
	int nSend = 0;
	struct sockaddr_in sockaddrh;

	sock = mysock->Sock;

	ZeroMemory( & sockaddrh, sizeof( struct sockaddr_in ) );
	sockaddrh.sin_family = AF_INET;
	sockaddrh.sin_port = htons( mysock_toaddr->UDPSendPort );
	sockaddrh.sin_addr.s_addr = inet_addr( mysock_toaddr->UDPSendAddr );

	if ( sock != INVALID_SOCKET )
	{
		while ( nSend < nlen )
		{
			bytesend = sendto( sock, ( lpbuf + nSend ), ( nlen - nSend ), NULL,
				( const SOCKADDR * ) &sockaddrh, sizeof( sockaddrh ) );
			if ( bytesend == SOCKET_ERROR || bytesend == 0 )
			{
				sErr = "sendto Error:" + IntToStr( WSAGetLastError( ) );
				return -1;
			}
			nSend += bytesend;
		}
		return nSend;
	}

	return -1;

}

// ------------------------------------------------------------------------------
// �������,1��ʾ�ɹ�
int CNetCtl::Socket_Recv(
	Struct_Mysock * mysock,
	char *          lpbuf,
	int             nlen )
{
	int iRcvByte = -1;

	int iErrorCode = 1;

	switch ( mysock->Protocol )
	{
	case TCP_SERVER:
	case TCP_CLIENT:
		iRcvByte = TCPRev( mysock, lpbuf, nlen );
		if ( iRcvByte == -1 )
		{
			iErrorCode = ( int )WSAGetLastError( );
		}
		break;
	case UDP:
	case UDP_GROUP:
		iRcvByte = UDPRev( mysock, lpbuf, nlen );
		if ( iRcvByte == -1 )
		{
			iErrorCode = ( int )GetLastError( );
		}
		break;
	default:
		iErrorCode = -1;
		break;
	}

	return iErrorCode;
}

// TCP��ʽ�����ݽ���
int CNetCtl::TCPRev(
	Struct_Mysock * mysock,
	char *          lpbuf,
	int             nlen )
{
	SOCKET sock;
	int byterev;
	int nrev = 0;
	sock = mysock->Sock;

	while ( nrev < nlen )
	{
		byterev = recv( sock, ( lpbuf + nrev ), ( nlen - nrev ), NULL );
		if ( byterev == SOCKET_ERROR || byterev == 0 )
		{
			sErr = "recv Error:" + IntToStr( WSAGetLastError( ) );
			return -1;
		}
		nrev += byterev;
	}
	return nrev;
}
// ------------------------------------------------------------------------------

// UDP��ʽ�����ݽ���
int CNetCtl::UDPRev(
	Struct_Mysock * mysock,
	char *          lpBuf,
	int             nlen )
{
	SOCKET sock;
	int byterev, length_addrsend;
	// int nrev = 0;
	struct sockaddr_in sockaddr_send;

	sock = mysock->Sock;
	ZeroMemory( & sockaddr_send, sizeof( struct sockaddr_in ) );
	length_addrsend = sizeof( sockaddr_send );

	byterev = recvfrom( sock, lpBuf, nlen, 0, ( SOCKADDR * ) &sockaddr_send,
		&length_addrsend );

	if ( byterev == SOCKET_ERROR || byterev == 0 )
	{
		sErr = "recvfrom Error:" + IntToStr( WSAGetLastError( ) );
		byterev = -1;
	}
	return byterev;
}

// ------------------------------------------------------------------------------
// �ر��׽ӿ�
void CNetCtl::Socket_Close( Struct_Mysock * mysock )
{
	SOCKET sock;
	if ( mysock->Protocol == TCP_SERVER )
	{
		sock = mysock->TCPSock;
		if ( sock != INVALID_SOCKET )
		{
			shutdown( sock, SD_BOTH );
			closesocket( sock );
			mysock->TCPSock = INVALID_SOCKET;
		}
	}
	else
	{
		sock = mysock->Sock;
		if ( sock != INVALID_SOCKET )
		{
			shutdown( sock, SD_BOTH );
			closesocket( sock );
			mysock->Sock = INVALID_SOCKET;
		}
	}

}

void CNetCtl::Socket_ClientClose( Struct_Mysock * mysock )
{
	SOCKET sock;
	if ( mysock->Protocol == TCP_SERVER )
	{
		sock = mysock->Sock;
		if ( sock != INVALID_SOCKET )
		{
			shutdown( sock, SD_BOTH );
			closesocket( sock );
			mysock->Sock = INVALID_SOCKET;
		}
	}
}
