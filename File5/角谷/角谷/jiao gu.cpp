#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string s1;
	int a;
	cin>>s1;
	a=s1.size();
	while(a>0)
	{
		cout<<s1[a-1];
		a--;
	}
	return 0;

}