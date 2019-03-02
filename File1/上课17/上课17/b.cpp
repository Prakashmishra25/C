#include<iostream>
using namespace std;
//名字查找classB void fun（elemtype A）A 往上找
//局部类
void fun()
{
	class A
	{
	public:
		/*static */int  n1;//不能出现静态属性成员在局部类中，无法类外定义；静态成员函数可以出现，需内部定义（实际上无static作用）
		void display();
	};//只能在这个函数（这段语句之后使用）,class A 调用到fun函数，并且执行到这条语句才存在;

}
/*void A::display()
{
}无法类外定义*/




int main(void)
{
	return 0;
}