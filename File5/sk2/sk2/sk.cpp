#include<iostream>
using namespace std;
//#define T 2+3
const int T=2+3;
int main(void)
{
	const int x=10;
	int const *p=&x;//常亮指针
	const int *q=&x;//指向常量的指针；
	int y=28;
	int *const m=&y;//常指针
	cout<<T*T<<endl;
}