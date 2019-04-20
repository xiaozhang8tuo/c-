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


	//�ͻ��˳�ʼ������ȡhandle����
	//int cltSocketInit(void **handle  /*out*/);
	virtual int cltSocketInit() = 0;

	//�ͻ��˷�����
	//int cltSocketSend(void *handle /*in*/, unsigned char *buf /*in*/, int buflen /*in*/);
	virtual int cltSocketSend(unsigned char *buf /*in*/, int buflen /*in*/) = 0 ;

	//�ͻ��˽��ܱ���
	//int cltSocketRev(void *hande /*in */, unsigned char *buf /*in*/, int *buflen/*in out */);
	virtual int cltSocketRev(unsigned char *buf /*in*/, int *buflen/*in out */) = 0 ;

	//�ͻ����ͷ���Դ
	//int cltSocketDestory(void * handle/*in*/);
	virtual int cltSocketDestory() = 0;

private:
};
