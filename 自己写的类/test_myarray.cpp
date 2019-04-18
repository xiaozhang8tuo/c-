#include <iostream>
#include "myarray.h"
using namespace std;

int main()
{ 
	Array1 a1(10);
	for (int i = 0; i < 10; i++)
	{
		a1.setdata(i, i);
	}
	/*for (int i = 0; i < 10; i++)
	{
		cout<< "a1:"<<a1.getdata(i)<< " ";
	}*/
	Array1 a2 = a1;
	/*for (int i = 0; i < 10; i++)
	{
		cout<<"a2:" << a2.getdata(i) << " ";
	}*/
	Array1 a3(10);
	// a3.operator=(Array1 const & obj)
	a3 = a1; 
	a3 = a1 + a2;
	//a3 = a1 = a2;
	/*for (int i = 0; i < 10; i++)
	{
		cout<< "a3:" << a3.getdata(i) << " ";
	}*/
	Array1 a4 = a1 + a2;  //匿名对象temp转正
	a1[1] = 4;
	cout << (a2 == a1) << (a1 != a1) << endl;
	cout << a1<<a2<<a3<<endl;
	cout<<"hello"<<endl;
	system("pause");
	return 0;
}
