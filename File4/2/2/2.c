#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	int c=0;
	char b;
	printf("�������ַ�:");
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

	printf("����1�ĸ���Ϊ:%d",c);
	system("PAUSE");
	return 0;
}