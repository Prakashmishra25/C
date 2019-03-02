#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class MyString{
public:
	MyString(const char *const p)
	{
		ptr=new char[strlen(p)+1];
		strcpy(ptr,p);
	}
	~MyString(){
		delete []ptr;
	}
	//拷贝构造函数
	MyString(const MyString & t)//引用省内存，引用效率高
	{
		//ptr=t.ptr;浅拷贝
		//
		ptr=new char[strlen(t.ptr)+1];
		strcpy(ptr,t.ptr);

	}
	void display(){
		cout<<ptr<<endl;
	}
private:
	char*ptr;



};
int main(void)
{
	char a[]="abcd";
	
	
	MyString s1("abcd");
	//cout<<s1.ptr<<endl;//不输出地址，打印对应内存里的字符，取到/0
	//MyString s2("1234");
	MyString s2(s1);
	MyString s3=s1;//也是拷贝构造函数

	//s2=s1;
	//MyString s2(s1);拷贝构造//系统偷偷提供拷贝1构造函数

}