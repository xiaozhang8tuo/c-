#pragma once
#include <iostream>
using namespace std;
class Array1
{
public:
	Array1(int length);
	~Array1();
	Array1(const Array1 & obj);

public:
	void setdata(int index, int value);
	int getdata(int index);
	int getlength();

private:
	int m_length;
	int* m_pt;

public:
	//重载=      a3 = a1; 
	Array1& operator=(Array1 const & obj);  // 注意 返回复杂类型元素的都是返回一个新的匿名对象，要注意有没有人来接它。

	//重载+      a3 = a1 + a2;
	Array1 operator+(Array1 const & obj);

	//重载[]     a1[1];
	int& operator[](int index);

	//重载==     a2 == a1;
	bool operator==(const Array1& obj);

	//重载!=     
	bool operator!=(const Array1& obj);

	//重载<< ;//插入     # 函数返回值当左值要返回一个引用 
	friend ostream& operator<<(ostream& out, Array1& obj);// 要记得加载 #include "iostream" 文件。;
};
