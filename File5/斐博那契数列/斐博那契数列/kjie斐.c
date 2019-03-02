#include<stdio.h>
#include<stdlib.h>
int Fib(int k,int m)
{
	if(m<k)
	{
		return 0;
	}
	else if((m==k)||(m==k+1))
	{
		return 1;
	}
	else
	{
		return Fib(k,m-1)+Fib(k,m-2);
	}
}
int main(void)
{
	printf("%d",Fib(3,8));
	system("pause");
	return 0;
}//Ê±¼ä¸´ÔÓ¶È£º