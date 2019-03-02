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
const int & fun(int & a)//不允许修改
{
	return a;
}
int main(void)
{
	int n=10;
	fun(n);
	int(*p)(int,int)=mymax;//函数指针
	cout<<mymax(10,20)<<endl;
	cout<<p(10,20)<<endl;




	p=myadd;
	cout<<p(20,10)<<endl;
	//函数引用代替指针
	int (& q)(int, int)=mymax;
	cout <<q(10,20)<<endl;
	//q=myadd;//是错误的
	//函数指针可以先定义后赋值，引用不可；





	//类型强制转换；
	//隐式//char a='a'; short b=10;
	//a+b结果的类型是int;
	//规则：bool short char ->int
	//int + long=long
	//->long long
	//float 只要参与运算必然变为double;
	//->double;
	//float a=3.14f,b=4.1f;
	//a+b 结果的类型是double;
	//char+float=double;


	//.....................................................
	//显式. 强制类型转换；
	//（类型）变量 字面值 表达式
	//(double)100;
	//(double)(10+2)
	//(volatile )const int a=10;
	//int *p=(int *)&a;
	//*p=20;
	// cout <<a <<endl;//10;
	//cout<<*p<<endl;//20;



	//c++强制转换
	//1.兼容了C语言的强制转换
	//2.增加了函数式的强制类型转换；
	//int a=10；double(a);//类似函数调用；
	//本质为1.c++不建议强制转换；
	//3.命名的强制类型转换
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