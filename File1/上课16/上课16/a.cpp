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
	int getN1()const{trturn n1;}//const修饰this指针
	int n1;int n2;
};
void fun(A a){}
void fun(const A *p){p->n1=100;}//*p内容不能修改，p->...属于内容
void fun(A & a)//节省空间并且能修改；1.引用好用 2.引用更加安全 3好理解                                                                                                                                                                                                                                                                  
{


}



int main(void)
{

	/*int num=10;
	int & text=num;//内存起别名,偷偷定义指针;int * const p= &num
	cout<<text<<endl;*/
	A t1(10,20);
	A t2(100,200);
	A & b=t1;
	//b.n1=100;变
	b=t2;
	cout<<t1.n1<<endl;
	cout<<t1.n2<<endl;

	const A t3(10,20);
	//A &b=t3;不可以，类型不匹配，限制只能越来越多;
	//A *const p=&t3 也不行，const位置不对
	const A * const p=&t3;//可以
	//引用占内存




	A t(10,20);
	fun(t);
	fun(&t);






	return 0;
}