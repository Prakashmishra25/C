#include<iostream>
#include<string>
using namespace std;
template<typename T,int N>
T * myMalloc(int len)
{
	T *p=new T[len];
	for(int i=0;i<len;i++)
	{
		p[i]=N;
		
	}
	return p;
}

int main(void)
{
	int *p=myMalloc<int,10>(10);//ֻ��д����ֵ,����ʱ�ڲ�����ΪN�ı���
	

	
	return 0;
}