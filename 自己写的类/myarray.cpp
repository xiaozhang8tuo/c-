# include <iostream>
#include "myarray.h"
using namespace std;


Array1::Array1(int length = 0)
{
	if (length < 0)
	{
		m_length = 0;
	}
	m_length = length;
	m_pt = new int[m_length];
}
Array1::~Array1()
{
	if (m_pt != NULL)
	{
		delete[]m_pt;
		m_pt = NULL;
	}
	m_length = 0;
}
//Array1 a2 = a1; 
Array1::Array1(const Array1 & obj)
{
	this->m_length = obj.m_length;
	this->m_pt = new int[m_length];
	for (int i = 0; i < m_length; i++)
	{
		this->m_pt[i] = obj.m_pt[i];
	}
	
}

void Array1::setdata(int index, int value)
{
	this->m_pt[index] = value;
}
int Array1::getdata(int index)
{
	return this->m_pt[index];
}
int Array1::getlength()
{
	return this->m_length;
}
//a2 = a1 
Array1& Array1::operator=(Array1 const & obj)
{
	//释放内存
	if (m_pt != NULL)
	{
		delete[]m_pt;
		m_pt = NULL;
	}
	//分配内存
	this->m_length = obj.m_length;
	this->m_pt = new int[m_length];
	//复制内容
	for (int i = 0; i < m_length; i++)
	{
		this->m_pt[i] = obj.m_pt[i];
	}
	return *this;
}

//a3 = a1 + a2;
Array1 Array1::operator+(Array1 const & obj)
{
	Array1 temp(obj.m_length);
	for (int i = 0; i < m_length; i++)
	{
		temp.m_pt[i] = this->m_pt[i] + obj.m_pt[i];
	}
	return temp;

}

//a1[1] = 3 ;a1[1];
int& Array1::operator[](int index)
{
	return m_pt[index];
}

//a2 == a1;
bool Array1::operator==(const Array1& obj)
{
	if (this->m_length != obj.m_length) { return false; }
	for (int i = 0;i< m_length;i++)
	{
		if (this->m_pt[i] != obj.m_pt[i]) { return false; }
	}
	return true;
}

//a2 != a1;
bool Array1::operator!=(const Array1& obj)
{
	return !(*this == obj);
}


//cout << a1
ostream& operator<<(ostream& output, Array1& obj)
{
	for (int i = 0; i < (obj.m_length); i++)
	{
		output << obj[i] << " ";
	}
	return output;
}
