#include<iostream>
#include<string>
#include<stdlib.h>//����malloc,malloc�޷���ʼ��memset(p,0,4)
using namespace std;
//1.��ͬһ������
//��������ͬ���β��б�ͬ
//����ֵ��������
//ջ�� ���� ������ ��̬ȫ���� ���ֳ�����













struct err
{
	string file;
	int line;
	string msg;
};


int main(void)
{
	int *p=(int *)malloc(sizeof(int)*3);
	p[0]=10;//*(p+0)
	p[1]=20;//*(p+1)
	2[p]=30;//*(2+p)

	int *q= new int(100);
	cout <<*q<<endl;
	delete q;
	int *p= new int[3];
	p[0]=10;
	p[1]=20;
	p[2]=30;
	delete []p;//��ʾ�ͷ������ڴ棻
	try
	{
		cout<<"��ͼ"<<endl;
		throw(110);
		cout<<"������"<<endl;

	}
	catch(int e)
	{
		if(e==110)
			cout<<"Ѹ�ٳ�������ֹ����"<<endl;
		elsw if(e==120)
			cout<<""<<endl;
	}
	catch(...)
	{
		cout<<""<<endl;






























		try{

			ree e;
			e.file=_FILE_;
			e.line=_LINE_;
			e.msg="��δ���̫˧�ˣ��޷�����";
			throw(e);
		}
		catch(err e)
		{

		}



















	int a=10,c=20;
	int & b = a;
	int *p=&b;
	//b=c;�����ԣ�רһ
	cout<<sizeof(a)<<endl;//4
	cout<<sizeof(b)<<endl;//4
	b=20;//��a�޸�Ϊ20��



	return 0;

}