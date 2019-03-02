#include<iostream>
using namespace std;
int max(int a,int b)//定义声明
{
	return a>b?a:b;
}
int main(void)
{
	cout<<max(10,28)<<endl;
	return 0;
	/*for(int i=1;i<101;i++)
	{
		cout<<i<<endl;
	}
	cout<<i<<endl;
	

}
//f()与f(void);C语言中前者可表示接收多个参数；c++z中都表示不接收；

