#include<iostream>
#include<string>
using namespace std;
// 9 10 7 4 11
// 9 7 4 10 11
// 7 4 9 10 11
// 4 7 9 10 11
// 4 7 9 10 11
template<class Type>
void mySort(Type *p,int len)
{
	bool change=true
	for(int i=0;i<len-1&&change;i++)
	{
		change=false;
		for(int j=0;j<len-1-i;j++)
		{
			if(p[j]>p[j+1])
			{
				Type temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
				change=true;
			}
		}
	}
}



int main(void)
{
	int arr[10]={10,8,2,1,5,9};
	cout<<arr<<endl;//数组首元 地址带类型信息 int *p
	cout<<&arr<<endl;//数组地址
	//结果相同
	mySort(arr,6);
	//cout<<arr[0]<<endl;
	return 0;
}*/