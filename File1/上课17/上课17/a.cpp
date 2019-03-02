#include<iostream>
using namespace std;
//嵌套类局部类
class A
{
public:
	//嵌套类只能访问外围类属于类的对象；
	typedef int Mytype;//属于类
	enum MyEnum{BOY,GIRL};
	union MYUnion
	{

	}
	class x;//属于类
	struct y;//属于类
	class B;
	B * pB;
	//B b;不可以，前面只给了简单声明，不能在外围类定义一个嵌套类的对象;要实现的话需要在外围类给出完整声明
	/*{
	public:
		int getN1();//{return n1;}
		int n1;
		num++;//外围类属性成员无法访问，属于对象的豆村访问；num2可以，属于类；
	};*/
	int num;
	static int num2;
 	void display();
};
//嵌套类的成员函数定义只能在全局
void A::display()
{
	cout<<""<<endl;
}
class A::B
{
public:
	int getN1();//{return n1;}
	int n1;

}






int A::B::getN1(){return n1;}


int main(void)
{

	return 0;
}



//嵌套类局部类
/*
class Student
{
public:
	int age;
	int id;
	string name;
};
Student maxByAge(Student s1,Student s2)
{
	if(s1age>s2.age)
	{
		return s1;

	}
	return s2;
}
void getMax(Student *p,int len,Student (*f)(Student s1,Student s2))
{
	Student max=p[0];
	for(int i=1;i<len;i++)
		max=(*f)(max,p[i]);

}*/
