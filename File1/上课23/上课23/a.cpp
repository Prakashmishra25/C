
#include<iostream>
using namespace std;
//函数运算符
/*class B{
public: 
	int n;
	
};*/
class A{
public: 
	int n;
	//方法一赋值运算符重载
	/*A & operator= (const B & b)//返回左值
	{
		n=b.n;
		return *this;

	}*/
	A(){}
	//方法二构造函数
	/*A(const B & b)
	{
		n=b.n;
	}*/
	

};
class B{
public: 
	int n;
	//方法三
	//类型转换运算符重载，不需要返回值;
	operator A(){//有A在函数名内，返回值无需多此一举
		A temp;
		temp.n=n;
		return temp;//必须return，虽然很奇怪

	}
};






int main(void)
{
	A a1;
	B b1;
	b1.n=10;
	a1=b1;//隐式提升B—>A temp->a1
	cout<<a1.n<<endl;
	/*int num;
	num=b1;//只能第三种
	*/
	
	return 0;
	

}

/*
class A
{
public:
	//函数运算符重载
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
	//函数对象
	A text, a1, a2;
	cout<<text(1,2)<<endl;
	cout<<a1(1,2)<<endl;
	return 0;
}*/
