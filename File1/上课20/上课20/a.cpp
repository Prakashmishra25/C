#include<iostream>
using namespace std;
class A {
public:
	A(){cout<<"A"<<endl;}
	~A(){cout<<"~A"<<endl;}
};
class B:public A {
public:
	B(){cout<<"B"<<endl;}
	~B(){cout<<"~B"<<endl;}
};
class C:public B,public A/**/{
public:
	C(){cout<<"C"<<endl;}
	~C(){cout<<"~C"<<endl;}
public:
	B b;//ABAABCÏÈ¼Ì³Ð£¬°´ÕÕÉùÃ÷Ë³Ðò
};//ABC~C~B~A
int main(void)
{
	C c;

	return 0;
}