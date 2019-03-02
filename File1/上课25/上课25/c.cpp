#include<iostream>
#include<string>
using namespace std;
//面向过程，对象，泛型ElemType忽略类型;
template <typename MyType>//class可与typename替换
MyType add(MyType a,MyType b)
{
	return a+b;
}//<>类型参数表,函数模板，编译时期产生函数代码,由编译器产生，模板技术;
class A
{
public:
	int n;
	const A operator+(const A&r)
	{
		A rtn;
		rtn.n=n+r.n;
		return rtn;
	}
};
int main(void)
{
	string s1("abc"),s2("def");
	cout<<add<int>(10,20)<<endl;
	cout<<add<float>(10,20.1)<<endl;
	cout<<add<string>("abc","def")<<endl;
	cout<<add(s1,s2)<<endl;
	cout<<add<int>(10,10.0)<<endl;;
	A a1,a2,a3;
	a1.n=10;
	a2.n=20;
	a3=add<A>(a1,a2);
	cout<<a3.n<<endl;
	return 0;
}