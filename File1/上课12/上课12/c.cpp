#include<iostream>
#include<string>
using namespace std;
classPerson{

public:
	Person()
		:id("0001")
	{}
	void display()const{cout<<id<<endl;};//const表示清白不是写入操作
	void setname(string s){
		name=s;
	}
	string getid(){return id;}
	string name;
	int age;
private:
	const string id;//常属性成员
};




int main(void)
{
	Person p1;
	const Person p2;//p2只能读取不能写入p2.setname("list")非法写入p2.display()会被认为非法写入
	//常对象只能访问常函数


}