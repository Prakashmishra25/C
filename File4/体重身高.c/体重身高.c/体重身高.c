#include<stdio.h>
#include<stdlib.h>
#include<float.h>
int main(void)
{
	double a, b, c;
	printf("请输入您的体重和身高a（kg）,b(m):");	
	scanf("%lf,%lf", &a, &b);
	c=a/(b*b);
	if(c>24)
	{
		printf("你是超重的");
		system("PAUSE");
		return 0;
	}
	else
	{
	printf("你没有超重");
	system("pause");
	return 0;
	}
}

