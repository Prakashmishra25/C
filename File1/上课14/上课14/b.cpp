#include<iostream>
#include<cstdio>
using namespace std;
class A
{
public:A(){n=1;}
	   A *fun(){return this;}
	   A(int t):n(t){}
	   int getN(){return n;};
	   static int getcount(){return count;}
private:

	   
	 
	   int n;
	   static int count;
};
int A::count;//定义


int main(void)
{
	A text;
	text.getN();//A::getN(&text)
	text.getcount();//静态成员函数没有this指针 A::getcount()不能访问n;
	A::getcount();

	return 0;
}