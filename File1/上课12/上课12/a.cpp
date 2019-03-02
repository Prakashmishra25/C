#include<iostream>
using namespace std;



class Student{;
public:
	Student(string s="",int a=10)
		:name(s),age(a)
	{
		count++;

	}
	~Student(){
		count--;
	}
	//只能访问静态属性成员和静态成员函数
	//不能访问非静态属性成员和函数
	static int getcount(){
		return count;
	}
//private:
	string name;
	int age;
	//静态属性成员声明
	static int count;//静态属性成员


};
//定义，不需要static
int Student ::count =10;//只给静态用
int student ::getcount(){
	return count;
}//也不用static,属于类，而不是对象,内存单独存在



/*int num;//int num=0;
void fun()
	//int num2=0;
	static int num;//静态局部变量脱离栈区，在静态全局区
	num++;
	cout<<::num<<endl;
}*/
int main(void)
{
	/*int *p=new int;//p是动态变量;
	cout<<num<<endl;
	fun();
	fun();
	fun();*/
	Student s1,s2;//栈区
	cout <<s1.count<<endl;
	s1.count++;
	{
		Student s3;
	}
	cout <<s2.count<<endl;
	cout<<Student::count<<endl;//封装

	return 0;
}