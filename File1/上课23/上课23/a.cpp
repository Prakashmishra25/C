
#include<iostream>
using namespace std;
//���������
/*class B{
public: 
	int n;
	
};*/
class A{
public: 
	int n;
	//����һ��ֵ���������
	/*A & operator= (const B & b)//������ֵ
	{
		n=b.n;
		return *this;

	}*/
	A(){}
	//���������캯��
	/*A(const B & b)
	{
		n=b.n;
	}*/
	

};
class B{
public: 
	int n;
	//������
	//����ת����������أ�����Ҫ����ֵ;
	operator A(){//��A�ں������ڣ�����ֵ������һ��
		A temp;
		temp.n=n;
		return temp;//����return����Ȼ�����

	}
};






int main(void)
{
	A a1;
	B b1;
	b1.n=10;
	a1=b1;//��ʽ����B��>A temp->a1
	cout<<a1.n<<endl;
	/*int num;
	num=b1;//ֻ�ܵ�����
	*/
	
	return 0;
	

}

/*
class A
{
public:
	//�������������
	int operator() (int a,int b)
	{
		return a+b;
	}
	int operator() (int a,int b,int c)
	{
		return a+b+c;
	}
};



int main(void)
{
	//��������
	A text, a1, a2;
	cout<<text(1,2)<<endl;
	cout<<a1(1,2)<<endl;
	return 0;
}*/
