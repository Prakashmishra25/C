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
	cout<<"������һ���˽�����������0��ʼ����";
	cin>>oct>>x;
	cout<<"x��ʮ�����Ʊ�ʾΪ:"<<hex<<x<<endl;
	cout<<ns1::x<<endl;
	cout<<"x��ʮ���Ʊ�ʾΪ:"<<dec<<x<<endl;
	cout<<oct<<ns1::x<<endl;
	
	return 0;
}