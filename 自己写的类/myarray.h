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
	//����=      a3 = a1; 
	Array1& operator=(Array1 const & obj);  // ע�� ���ظ�������Ԫ�صĶ��Ƿ���һ���µ���������Ҫע����û������������

	//����+      a3 = a1 + a2;
	Array1 operator+(Array1 const & obj);

	//����[]     a1[1];
	int& operator[](int index);

	//����==     a2 == a1;
	bool operator==(const Array1& obj);

	//����!=     
	bool operator!=(const Array1& obj);

	//����<< ;//����     # ��������ֵ����ֵҪ����һ������ 
	friend ostream& operator<<(ostream& out, Array1& obj);// Ҫ�ǵü��� #include "iostream" �ļ���;
};
