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
	//b1.fun();//����,����fun�󲻻���ɽ��
	b1.A::fun();*/
	B b1;
	A *p=&b1;
	//p->fun();//����������;�����า�ǻ���,��virtualʵ��;
	A a1;
	//a1.fun();//����Ӱ��;
	A&aa=b1;
	//aa.fun();//����������;
	//��¼���ú�ָ��ָ�������࣬��ʵ�ָ���
	//���� ���� ����
	cout<<sizeof(A)<<endl;//1->thisָ��;//��virtual��4���ֽ��������ָ��pt->�麯����(�������麯�����ڴ��ַ)
	cout<<sizeof(B)<<endl;//1 ��virtual   1 4 4+4 
	A a;
	((void(*)())**(int **)&a)();
	return 0;

}