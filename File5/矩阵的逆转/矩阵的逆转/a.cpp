#include<iostream>
using namespace std;
int main(void)
{
	
	int ** a= new int *[2];
	for(int i=0;i<2;i++)
	{
		a[i]=new int[3];
	}
	
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];

		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	for (int i=0;i<2;i++)
	{
		delete []a[i];
		a[i]=NULL;
	}
	delete []a;
	a=NULL;
	return  0;
}