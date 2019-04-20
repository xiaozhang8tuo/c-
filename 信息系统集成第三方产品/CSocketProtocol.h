#pragma once
# include <iostream>
using namespace std;

class CSocketProtocol
{
public:
	CSocketProtocol()
	{
		;
	}
	virtual ~CSocketProtocol()
	{
		;
	}


	//客户端初始化，获取handle上下
	//int cltSocketInit(void **handle  /*out*/);
	virtual int cltSocketInit() = 0;

	//客户端发报文
	//int cltSocketSend(void *handle /*in*/, unsigned char *buf /*in*/, int buflen /*in*/);
	virtual int cltSocketSend(unsigned char *buf /*in*/, int buflen /*in*/) = 0 ;

	//客户端接受报文
	//int cltSocketRev(void *hande /*in */, unsigned char *buf /*in*/, int *buflen/*in out */);
	virtual int cltSocketRev(unsigned char *buf /*in*/, int *buflen/*in out */) = 0 ;

	//客户端释放资源
	//int cltSocketDestory(void * handle/*in*/);
	virtual int cltSocketDestory() = 0;

private:
};
