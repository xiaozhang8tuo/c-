#pragma once
using namespace std;
#include "CSocketProtocol.h"
//��س��̵ĵ�һ����Χ��Ʒд��
class CSckFactoryImp1: public CSocketProtocol
{
public:
public:
	//�ͻ��˳�ʼ������ȡhandle����
	//int cltSocketInit(void **handle  /*out*/);
	virtual int cltSocketInit();

	//�ͻ��˷�����
	//int cltSocketSend(void *handle /*in*/, unsigned char *buf /*in*/, int buflen /*in*/);
	virtual int cltSocketSend(unsigned char *buf /*in*/, int buflen /*in*/);

	//�ͻ��˽��ܱ���
	//int cltSocketRev(void *hande /*in */, unsigned char *buf /*in*/, int *buflen/*in out */);
	virtual int cltSocketRev(unsigned char *buf /*in*/, int *buflen/*in out */);

	//�ͻ����ͷ���Դ
	//int cltSocketDestory(void * handle/*in*/);
	virtual int cltSocketDestory();

private:
	unsigned char *p;
	int len;
};