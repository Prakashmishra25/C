/*#include<iostream>
using namespace std;
//赋值兼容
class A{public:int n1;};
class B: public A{public: int n2;};



int main(void)
{
	B b; b.n1=10;b.n2=20;
	//A a; a=b;//所有学生都是人,派生类可以给基类赋值
	//B b2; b2=a;不可以哦
	//A & a=b;//把B当做A来用，b内存前面放的是基类;
	//B & b2=a;不可以
	A *p=&b;//基在前;
	A a; a.n1=11;
	B *q=(B*)p;
	q->n2=100;




	return 0;
}*/