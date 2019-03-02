#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string a="student";
	string b(5,'r');
	string c(b);
	
	cout <<a<<endl;
	cout <<b<<endl;
	cout <<c<<endl;
	cout <<a.empty()<<endl;
	cout <<b.size()<<endl;
	cout <<a[2]<<endl;
	cout <<b+a<<endl;
	string ::size_type count =b.size();

	return 0;

}