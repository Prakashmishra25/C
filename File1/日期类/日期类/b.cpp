#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	string m_strName;
	string m_strSex;
	int m_iAge;
public:
	void Fun(string a)
	{
		m_strName=a;

	}
	void Fun(int b,string m)
	{
		m_strSex=m;
		
	}
	void Fun(int c)
	{
		 m_iAge=c;

	}
	void display()
	{
		cout<<"������"<<m_strName<<endl;
		cout<<"�Ա�"<<m_strSex<<endl;
		cout<<"���䣺"<<m_iAge<<endl;

	}


};
