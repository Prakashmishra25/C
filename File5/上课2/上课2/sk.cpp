#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
enum Sex {BOY=10,GIRL};
enum { A=10,B=20 }a;//无名枚举，没法定义相应变量
//int main(void)
//{
//	Sex zhangsan;//enum Sex zhangsan;
//	zhangsan =GIRL;
//	cout<<zhangsan<<endl;
//	zhangsan =BOY;
//	cout<<zhangsan<<endl;
//	cout<<A<<endl;
//	return 0;
//}
//union Text
//{
//	char a;
//	char b;
//	double c;
//};
int main(void)
{
	Text t;
	t.b=10;
	cout<<t.b<<endl;
	return 0;

}


//struct student
//{
//	string name;
//	int age;
//	void JieShao(){
//		cout<<"my name is"<<name<<",i am"<<"sui le"<endl;}
//
//
//
//};
//int main(void)
//{
////{
////	union{
////		char a;int b;double c;
////	}TEST;
////	a='a';
////	b=10;
////	cout<<a<<endl;
////
////}
//	struct student zs={"zhangsan",18};
//	zs.name="zhangxiaosan";
//	zs.JieShao();
//
//
//
//
//
//
//}
