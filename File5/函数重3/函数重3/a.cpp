#include<iostream>
using namespace std;
void ff(int a , int b)
{
	if(a>b)
	{
		cout<<a<<endl;
	}
	else
	{
		cout<<b<<endl;
	}

}
void ff(int a, int b, int c)
{
	if((a>=b)&&(a>=c))
	{
		cout<<a<<endl;

	}
	if((b>=a)&&(b>=c))
	{
		cout<<b<<endl;

	}
	if((c>=b)&&(c>=a))
	{
		cout<<c<<endl;

	}

}
void ff(double k, double m)
{
	if(k>m)
	{
		cout<<k<<endl;
	}
	else
	{
		cout<<m<<endl;
	}

}
void ff(double k, double m, double n)
{

}
int main(void)
{
	int a,b,c;
	double k,m,n;
	cout<<"������������������a��b��"<<endl;
	cin>>a>>b;
	ff(a,b);
	cout<<"������������������a,b,c��"<<endl;
	cin>>a>>b>>c;
	ff(a,b,c);
	cout<<"����������ʵ��k��m��"<<endl;
	cin>>k>>m;
	ff(k,m);
	cout<<"����������ʵ��k,m,n��"<<endl;
	cin>>k>>m>>n;
	ff(k,m,n);
	return 0;

}