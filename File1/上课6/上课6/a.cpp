#include<iostream>
#include<string>
using namespace std;
int  mymax(int a,int b){
	return a>b?a:b;

}
int myadd(int a,int b)
{
	return a+b;
}
const int & fun(int & a)//�������޸�
{
	return a;
}
int main(void)
{
	int n=10;
	fun(n);
	int(*p)(int,int)=mymax;//����ָ��
	cout<<mymax(10,20)<<endl;
	cout<<p(10,20)<<endl;




	p=myadd;
	cout<<p(20,10)<<endl;
	//�������ô���ָ��
	int (& q)(int, int)=mymax;
	cout <<q(10,20)<<endl;
	//q=myadd;//�Ǵ����
	//����ָ������ȶ����ֵ�����ò��ɣ�





	//����ǿ��ת����
	//��ʽ//char a='a'; short b=10;
	//a+b�����������int;
	//����bool short char ->int
	//int + long=long
	//->long long
	//float ֻҪ���������Ȼ��Ϊdouble;
	//->double;
	//float a=3.14f,b=4.1f;
	//a+b �����������double;
	//char+float=double;


	//.....................................................
	//��ʽ. ǿ������ת����
	//�����ͣ����� ����ֵ ���ʽ
	//(double)100;
	//(double)(10+2)
	//(volatile )const int a=10;
	//int *p=(int *)&a;
	//*p=20;
	// cout <<a <<endl;//10;
	//cout<<*p<<endl;//20;



	//c++ǿ��ת��
	//1.������C���Ե�ǿ��ת��
	//2.�����˺���ʽ��ǿ������ת����
	//int a=10��double(a);//���ƺ������ã�
	//����Ϊ1.c++������ǿ��ת����
	//3.������ǿ������ת��
	//const_cast
	const int a=20;
	const int *p=const_cast<int *>(&a);
	*p=30;
	cout <<a<<endl;//20;


	//static_cast
	int b=20;
	double d=static_cast<double>(b);
	//reinterpret_cast
	int c=30;int *pc=&c;
	int adr=reinterpret_cast<int>(pc);

	public:
	void setage(int a){
		age=a;
	}
	void sayage(){
		if(age<80)
		{}
		else
		{
		}
	}
	private:
	{
		int age
	}


}