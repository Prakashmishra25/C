#include<iostream>
#include<iomanip>
using namespace std;
namespace ns1
{
	int x=9;
}
int main(void)
{
	int x=0;
	cout<<"请输入一个八进制整数（以0开始）：";
	cin>>oct>>x;
	cout<<"x的十六进制表示为:"<<hex<<x<<endl;
	cout<<ns1::x<<endl;
	cout<<"x的十进制表示为:"<<dec<<x<<endl;
	cout<<oct<<ns1::x<<endl;
	
	return 0;
}