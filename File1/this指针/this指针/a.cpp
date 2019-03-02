#include<iostream>
using namespace std;
class MyClass
{
public:
	MyClass(int a=0,int b=0);
	MyClass &CopyObject(MyClass &my);
	void display();
private:
	int m_ia;
	int m_ib;

};
MyClass::MyClass(int a,int b)
{
	m_ia=a;
	m_ib=b;
}
void MyClass::display()
{
	cout<<"a="<<m_ia<<"   "<<"b="<<m_ib<<endl;
}
MyClass & MyClass::CopyObject(MyClass &my)
{
	this->m_ia=my.m_ia;
	this->m_ib=my.m_ib;
	return *this;
}
int main(void)
{
	MyClass obj1(1,1);
	obj1.display();
	MyClass obj2;
	obj2.display();
	obj2.CopyObject(obj1);
	obj2.display();
	return 0;
}