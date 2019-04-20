#define _CRT_SECURE_NO_WARNINGS
# include <iostream>
using namespace std; 
#include "CSocketProtocol.h"
#include "CSckFactoryImp1.h"
//面向抽象类 中石油编程框架实现完毕
int SckSendAndRev(CSocketProtocol *sp, unsigned char *in, int inlen, unsigned char* out, int *outlen)
{
	int ret = 0;
	ret = sp->cltSocketInit();
	if (ret ! = 0)
	{
		goto End; 
	}
	ret = sp->cltSocketSend(in, inlen);
	if (ret != 0)
	{
		goto End;
	}
	ret = sp->cltSocketRev(out, outlen);
	if (ret != 0)
	{
		goto End;
	}
End:
	ret = sp->cltSocketDestory();
	return 0;
}




//写一个框架
int main()
{
	int ret = 0;
	unsigned char in[4096];//主调函数分配内存
	int inlen;
	unsigned char out[4096];
	int outlen = 0;

	strcpy((char*)in, "123456");
	inlen = 9;//"123456这样的要传9个"

	CSocketProtocol * sp = NULL;
	sp = new CSckFactoryImp1;

	ret = SckSendAndRev(sp, in, inlen, out, &outlen);
	if (ret != 0)
	{
		printf("func SckSendAndRev() err():%d \n", ret);
		return ret;
	}
	delete sp;//通过父类指针释放所有子类资源



	cout<<"hello"<<endl;
	system("pause");
	return ret;
}