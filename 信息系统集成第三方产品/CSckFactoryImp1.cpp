# include <iostream>
using namespace std;
#include "CSckFactoryImp1.h"


//客户端初始化，获取handle上下
int CSckFactoryImp1::cltSocketInit()
 {	
	p = NULL ;
	len = 0;
	return 0;
}


//客户端发报文
int CSckFactoryImp1::cltSocketSend(unsigned char *buf /*in*/, int buflen /*in*/)
{
	p = (unsigned char*)malloc(sizeof(unsigned char)*buflen);//要熟悉
	if (p==NULL)
	{
		return -1;
	}
	memcpy(p, buf, buflen);
	len = buflen;
	return 0;
}


//客户端接受报文 ---别人(客户端)调我们的产品从服务器端接受数据，我们将要发送的数据给内存
int CSckFactoryImp1::cltSocketRev(unsigned char *buf /*in*/, int *buflen/*in out */)
{
	if (buf == NULL || buflen == NULL)
	{
		return - 1;
	}
	*buflen = this->len;
	memcpy(buf, this->p, this->len);
	return 0;
}


//客户端释放资源
int CSckFactoryImp1::cltSocketDestory()
{
	if (p != NULL)
	{
		
		free(p);
		p = NULL;
		len = 0;

	}
	return 0;
}
