#include<iostream>
using namespace std;
//#define T 2+3
const int T=2+3;
int main(void)
{
	const int x=10;
	int const *p=&x;//����ָ��
	const int *q=&x;//ָ������ָ�룻
	int y=28;
	int *const m=&y;//��ָ��
	cout<<T*T<<endl;
}