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
		cout<<"姓名："<<m_strName<<endl;
		cout<<"性别："<<m_strSex<<endl;
		cout<<"年龄："<<m_iAge<<endl;

	}


};
