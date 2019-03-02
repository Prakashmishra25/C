#include<iostream>
#include<string>
using namespace std;
//重载实现静态多态
//虚函数实现动态多态
//virtual 声明加就可以
//虚函数需要完全一致
//共有继承是赋值兼容的前提
//普通函数不能虚函数
//静态成员函数不能是虚函数
//内联函数不能是虚函数
//构造函数不能是虚函数，语法上限制
//析构函数
class Animal
{
public:
	virtual void call(){cout<<"叫0"<<endl;}
};
class Dog :public Animal{
public:
	void call(){cout<<"叫1"<<endl;}
};
class Cat :public Animal{
public:
	void call(){cout<<"叫2"<<endl;}
};
class Pig :public Animal{
public:
	void call(){cout<<"叫3"<<endl;}
};
void play(Animal *p)
{
	p->call();
}
/*class A
{
public:
	int n1;
};
class B:private A{
public:
	int n2;
};//B b;A *p=&b;不可行*/
class A
{
public:
	virtual ~A(){cout<<"~A"<<endl;}
};
class B :public:A
{
public:
	B(){p=new int[100];}
	~B(){
		cout<<"~B"<<endl;
		delete []p;
	}
	int *p;
};
//A *p=new B;
//delete p;~B ~A



int main(void)
{
	/*B b;
	A* p=&b;
	b.A::n1;*/
	Animal a1;
	Pig p1;
	Dog d1;
	Cat c1;
	play(&a1);
	play(&p1);
	play(&d1);
	play(&c1);
	return 0;
}