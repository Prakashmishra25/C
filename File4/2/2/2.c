#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	int c=0;
	char b;
	printf("请输入字符:");
	scanf("%c",&b);
	a=(int)b;

	while(a)
	{
		if(a&1==1)
		{
			c++;
			a>>=1;
		}
		a>>=1;

	}

	printf("所求1的个数为:%d",c);
	system("PAUSE");
	return 0;
}