#include<iostream>
using namespace std;
class A
{
public:
	A(int a=0,int b=0)
	{
		n1=a;
		n2=b;
	}
	void setN1(int num){n1=num;}
	int getN1()const{trturn n1;}//const����thisָ��
	int n1;int n2;
};
void fun(A a){}
void fun(const A *p){p->n1=100;}//*p���ݲ����޸ģ�p->...��������
void fun(A & a)//��ʡ�ռ䲢�����޸ģ�1.���ú��� 2.���ø��Ӱ�ȫ 3�����                                                                                                                                                                                                                                                                  
{


}



int main(void)
{

	/*int num=10;
	int & text=num;//�ڴ������,͵͵����ָ��;int * const p= &num
	cout<<text<<endl;*/
	A t1(10,20);
	A t2(100,200);
	A & b=t1;
	//b.n1=100;��
	b=t2;
	cout<<t1.n1<<endl;
	cout<<t1.n2<<endl;

	const A t3(10,20);
	//A &b=t3;�����ԣ����Ͳ�ƥ�䣬����ֻ��Խ��Խ��;
	//A *const p=&t3 Ҳ���У�constλ�ò���
	const A * const p=&t3;//����
	//����ռ�ڴ�




	A t(10,20);
	fun(t);
	fun(&t);






	return 0;
}