#include<iostream>
using namespace std;
//Ƕ����ֲ���
class A
{
public:
	//Ƕ����ֻ�ܷ�����Χ��������Ķ���
	typedef int Mytype;//������
	enum MyEnum{BOY,GIRL};
	union MYUnion
	{

	}
	class x;//������
	struct y;//������
	class B;
	B * pB;
	//B b;�����ԣ�ǰ��ֻ���˼���������������Χ�ඨ��һ��Ƕ����Ķ���;Ҫʵ�ֵĻ���Ҫ����Χ�������������
	/*{
	public:
		int getN1();//{return n1;}
		int n1;
		num++;//��Χ�����Գ�Ա�޷����ʣ����ڶ���Ķ�����ʣ�num2���ԣ������ࣻ
	};*/
	int num;
	static int num2;
 	void display();
};
//Ƕ����ĳ�Ա��������ֻ����ȫ��
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



//Ƕ����ֲ���
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
