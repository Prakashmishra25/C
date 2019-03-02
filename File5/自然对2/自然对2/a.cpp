#include<iostream>
using namespace std;
int D(int m)
{
	for(int i=0;i<=m/2;i++)
	{
		if(i*i==m)
		{
			return i;
		}
		
	}
	return 0;
	

	
}

void ff(int & x,int & y)
{
	int a,b;
	if(x>y)
	{
		a=x-y;

	}
	else
	{
		a=y-x;
	}
	b=x+y;
	int m=D(a);
	int n=D(b);
	if((D(a)!=0)&&(D(b)!=0))
	{
		cout<<"x和y是自然数对且两个平方数为："<<m<<" "<<n<<endl;;
		cout<<"x和y交换后为: "<<"x="<<y<<" "<<"y="<<" "<<x<<endl;
	}
	else
	{
		cout<<"x和y不是自然数对。"<<endl;
	}
	

}



int main(void)
{
	int x,y;
	cout<<"请输入两个自然数x和y:"<<endl;
	cin>>x>>y;
	ff(x,y);
	return 0;

}