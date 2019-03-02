/*#include<iostream>
using namespace std;

int main(void)
{

	A a1=a2;//拷贝构造
	A a1(a2);//拷贝构造
	cout<<endl;
	cout<<"\n";
	namespace ;
	bool ;//布尔类型
	true false;
	bool b1=!!100;//逻辑非
	string; //
	string s1="abcd";
	//string(const char* const s);
	string s1="abcd";//里面有指针指向堆区
	string s1=s1+s2;
	string s1=s1+"abcd";
	//随用随定义
	//;;域作用符
	//带默认参数的函数
	//inline 函数，在编译时期使用函数体的代码代替，编译后调用语句与函数消失，减少函数调用的代价，增加程序运行效率，代码过于冗余，编译的exe文件大
	//即使加上inline,也不代表它一定能成为内联函数
	//函数重载。。。。。。。。。。//类的静态多态的体现,编译之前能够确定
	//返回值不能作为重载依据
	//类的成员函数有无const能成为重载依据
	class A
	{
public:
	void fun(){}//A * const this
	void fun()const{}//const A *const this
	};
	//。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。
	new 和 delete;
	int *p=new int[10];
	delete []p;
	int arr[10]={1,2,3};//编译前确定，栈区，系统释放
	int *arr=new int[num];//运行时确定，在堆区，由程序员释放
	//引用
	//引用必须初始化;必须是左值，本质是指针;
	int(10);(int)10;
	//
	//常成员
	//引用 
	//没有默认构造函数的子对象

	//对象实lie化
	A arr[10]={1,2,3,4};//没有默认构造
	A *brr =new A[10];
	//堆区的必须要有默认构造函数
	//struct 默认共有访问，共有继承
	//class 相反
	//类的作用域与可见性
	//构造 析构
	// 先构造子对象 后当前;
	//先析构当前类 后子对象
	//拷贝构造函数 A a1(a2);A a1=a2;
	//深拷贝浅拷贝 
	//如果一个类在使用过程中在堆区申请了内存
	//1.析构
	// 2.拷贝
	// 3.运算符重载
	~A（）{delete []p}
	A(const A & a)
	{
		p=new int[100];
		for()
		{

		}
	}
	A & operator=(const A &r)
	{
		for()
		{

		}
	}
	//静态成员
	class A
	{
	public:
		A(){count++;}
		~A(){count--};
		static int getCount(){;}
	//静态成员函数只能访问静态成员和静态成员函数，reason：没有this指针
	private:
		static int count;
	};
	//静态属性成员必须类外定义
	int A::count=0;
	//对象成员
	//const 成员
	1.初始化列表;
	2.常成员函数,重载依据,只能读取数据，不能写入数据;
	3.常对象:
	//this指针，后面const能多不能少
	对象引用，对象的常引用;
	对象作为函数参数;
	嵌套类，局部类;
    嵌套类: A 内 B声明
    局部类:在一段代码里面定义的类，必须给出定义，不声明;
	继承派生:
	多重继承;
	先 基类，多重继承按声明顺序
	后 子对象 声明顺序
	再 本身
	赋值兼容 ，基类指针和引用可以指向派生类
	同名隐藏：
	抽象类，含有纯虚函数的类成为抽象类
	接口类：只含有纯虚函数的类叫做接口类；
	覆盖：派生类把抽象类虚函数写过；
	template<typename T>











	return 0;
}
*/