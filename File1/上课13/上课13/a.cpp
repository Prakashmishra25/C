#include<iostream>
using namespace std;
/*，

静态属性成员属于类，是所有对象公有属性；需要类内声明，类外定义，不要加static;
(静态属性成员类外定义语句只能放在源文件内.cpp)
如果是public，可以直接通过类型：：静态属性名访问
静态成员函数：专门访问静态属性成员，允许在没有对象情况下访问静态属性
静态成员函数只能访问静态属性成员和静态成员函数
普通成员函数可以访问类的所有属性及其所有成员函数


*/
/*class Person{
public:
	string name;
	static int count;
}
int Person::count;

class Person{
public:
	static int getcount(){}

private:

	string name;
	static int count;
}*/




/*


对象属性：（子对象）
没有默认构造函数的子对象，必须通过所属类的构造函数的初始化列表进行初始化。
构造顺序：先构造子对象，再构造当前对象的构造函数
*/


class Person{
public:
	Person()
		:id("00001")
	{
	}
	void printName()
		const//函数头后加const属于函数头
	{}
	string name;
	const string id;
	mutable int n;//善变的任何情况都可以进行写入操作（希望修改常对象的属性）

}
void Person::printName()const{}
int main(void)
{
	const Person p1;
	//p1.name=...;//错误
	//常对象调用常成员函数
	p1.n









	return 0;


}