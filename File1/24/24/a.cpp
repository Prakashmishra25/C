#include<iostream>
#include<string>
using namespace std;
class A
{
public:
	 //virtual void fun(){}
	virtual void fun1(){cout<<2<<endl;}
	virtual void fun2(){}
};
class B :public A
{
public:
	//void fun(int a){}
	//virtual void fun(){}
	virtual void fun1(){}

};
int main(void)
{

	/*B b1;
	//b1.fun();//错误,发现fun后不会往山找
	b1.A::fun();*/
	B b1;
	A *p=&b1;
	//p->fun();//调用派生类;派生类覆盖基类,由virtual实现;
	A a1;
	//a1.fun();//不受影响;
	A&aa=b1;
	//aa.fun();//访问派生类;
	//记录引用和指针指向派生类，会实现覆盖
	//重载 覆盖 隐藏
	cout<<sizeof(A)<<endl;//1->this指针;//加virtual后4个字节用来存放指针pt->虚函数表(代码区虚函数的内存地址)
	cout<<sizeof(B)<<endl;//1 加virtual   1 4 4+4 
	A a;
	((void(*)())**(int **)&a)();
	return 0;

}