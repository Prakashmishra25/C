#include<iostream>
using namespace std;
class A
{
public:
	A(){cout<<"A"<<endl;}
	A(const A & t){cout<<"A����"<<endl;}
	~A(){cout<<"~A"<<endl;}
};
class B
{
public:
	B(){cout<<"B"<<endl;}
	//B(const B & t)//A A B A B ���� C ~C ~B ~A ~B ~A ~A
		//:a1(t.a1)//A A B A���� B ���� C ~C ~B ~A ~B ~A ~A
	//{cout<<"B����"<<endl;}
	~B(){cout<<"~B"<<endl;}
	A a1;

};
class C
{
public:
	C()
		:b2(b1)
	{cout<<"C"<<endl;
	}
	~C(){cout<<"~C"<<endl;}
	A a;B b1;B b2;
};


int main(void)
{
	C t;
	
	return 0;
}//A A B A���� C ~C ~B ~A ~B ~A ~A

