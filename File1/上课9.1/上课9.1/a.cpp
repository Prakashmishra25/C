#include<iostream>
using namespace std;





class A{

public:
	A(){//�޲ι���
		n1=10;n2=20;
	};
	A(int p1=10,int p2=20){
		n1=p1;
		n2=p2;
	};
	int n1;int  n2;//�������Գ�Ա������ֵ
};
A::A(int p,int p2��{

}�вι������ⶨ�壻


class A{
public:
	A()
		:n1(10),n2(20)
	{



	}//����ͬʱд��ֵ���ڴ���,������������ã�
	A��int n1,int n2��
		:n1(p1),n2(p2)
	{}
	int n1,const int n2;//1.�����Գ�Ա��2.����  3.û��Ĭ�Ϲ��캯�����Ӷ��󣻱����ó�ʼ���б��ʼ��
}
class A{
public:
	A()

	{
		//n1=10; n2=n1(��ֵ������ȡ����);
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
	double & n2;//4���ֽ�int *const p =&a;
	b=20;//*p=20;
	cout <<b;//cout <<*p;
}
class A{
public:
	A��int p1,int p2��{
		n1=p1;n2=p2;
	}//����Ĭ�Ϲ��캯����class Aû��Ĭ�Ϻ���
	A��int p1=10,int p2=20��{
		n1=p1;n2=p2;
	}//��Ĭ�Ϲ��캯�� A test
	int n1;int n2;
}
/* Ĭ�Ϲ��캯������ʵ����һ������ʱ������Ҫ�����κΣ�����ƥ�䵽�Ĺ��캯��������Ĭ�Ϲ��캯��*/
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
		:n(10)//ƥ�乹�캯��;
	{

	}
	A n;//�Ӷ���



}







int main(void)
{
	A t1;//����ռ䣬�����Ա�����ֽڸ�n1,n2;�ٸ�ֵ  (������)
	A t2=A();
	A *p1=new A;
	A *p2=new A();//������û����ʵ������
	A t3(1,2);
	A t5(1);
	A *p2=new A(1,2);
	const iny num=10;//�����ʼ��
	int a=10;
	int & b=a;





	return 0;



}