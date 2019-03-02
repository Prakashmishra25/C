#include<iostream>
using namespace std;
int main(void)
{
	int a=10;
	int & b=a;
	b=20;
	cout <<a<<endl;;
	return 0;
}