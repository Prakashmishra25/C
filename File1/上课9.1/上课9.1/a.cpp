#include<iostream>
using namespace std;





class A{

public:
	A(){//无参构造
		n1=10;n2=20;
	};
	A(int p1=10,int p2=20){
		n1=p1;
		n2=p2;
	};
	int n1;int  n2;//常量属性成员不允许赋值
};
A::A(int p,int p2）{

}有参构造类外定义；


class A{
public:
	A()
		:n1(10),n2(20)
	{



	}//分配同时写入值，内存层次,函数起参照作用；
	A（int n1,int n2）
		:n1(p1),n2(p2)
	{}
	int n1,const int n2;//1.常属性成员，2.引用  3.没有默认构造函数的子对象；必须用初始化列表初始化
}
class A{
public:
	A()

	{
		//n1=10; n2=n1(赋值操作非取别名);
	}
	int n1; int & n2;
}
class A{
public:
	A()
		:n2(n1)
	{
	}
	int n1;
	double & n2;//4个字节int *const p =&a;
	b=20;//*p=20;
	cout <<b;//cout <<*p;
}
class A{
public:
	A（int p1,int p2）{
		n1=p1;n2=p2;
	}//不是默认构造函数，class A没有默认函数
	A（int p1=10,int p2=20）{
		n1=p1;n2=p2;
	}//是默认构造函数 A test
	int n1;int n2;
}
/* 默认构造函数，在实例化一个对象时，不需要传递任何；就能匹配到的构造函数，叫做默认构造函数*/
class A{
public:
	A(int n){
		num=n;
	}
	int num;

}
class B{
public:
	B()
		:n(10)//匹配构造函数;
	{

	}
	A n;//子对象



}







int main(void)
{
	A t1;//分配空间，定义成员，拿字节给n1,n2;再赋值  (二义性)
	A t2=A();
	A *p1=new A;
	A *p2=new A();//与上面没区别，实例化；
	A t3(1,2);
	A t5(1);
	A *p2=new A(1,2);
	const iny num=10;//必须初始化
	int a=10;
	int & b=a;





	return 0;



}