#include<iostream>
#include<string>
using namespace std;
//����ʵ�־�̬��̬
//�麯��ʵ�ֶ�̬��̬
//virtual �����ӾͿ���
//�麯����Ҫ��ȫһ��
//���м̳��Ǹ�ֵ���ݵ�ǰ��
//��ͨ���������麯��
//��̬��Ա�����������麯��
//���������������麯��
//���캯���������麯�����﷨������
//��������
class Animal
{
public:
	virtual void call(){cout<<"��0"<<endl;}
};
class Dog :public Animal{
public:
	void call(){cout<<"��1"<<endl;}
};
class Cat :public Animal{
public:
	void call(){cout<<"��2"<<endl;}
};
class Pig :public Animal{
public:
	void call(){cout<<"��3"<<endl;}
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
};//B b;A *p=&b;������*/
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