#include<iostream>
using namespace std;

class A
{
public:
	A* setN1(int t){n1=t;return this;}//A 不行 可用A &
	A* setN2(int t){n2=t;return this;}
	A* setN3(int t){n3=t;return this;}
	void fun1()//A* const this
	{}
	void fun1()const//const A* const this
	{}

	int n1;
	int n2;

}



int main(void)
{
	A text();
	text.fun1();
	//静态成员函数没this指针
	text.setN1(11)->setsetN1(11)->setsetN1(11);




}