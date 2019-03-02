#include<iostream>
#include<string>
using namespace std;
class A{
public:
	A(){cout<<"A"<<endl;}
	~A(){
		cout<<"~A"<<endl;}

	}


};

class B{
public:
	B()

	{
		cout<<"B"<<enl;
	}
	~B()
	{
		cout<<"~B"<<enl;

	}
	
	A a;//×Ó¶ÔÏó

}
class C{
public:
	C(){cout<<"C"<<endl;
	p=new B[2];}
	~C(){cout<<"~C"<<endl;
	delete []p;}

	}
	A a;B b[2];B *p;
}
class C{


}
int main(void)
{



}
