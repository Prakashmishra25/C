#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	
	int a, b, c, m, n;
	printf("请输入三个正整数（以空格隔开）:");
	scanf("%d %d %d",a, b, c);
	m=a*b*c;
	if(a<b)
	{
		m=a;
		a=b;
		b=m;
	}
	if(a<c)
	{
		m=a;
		a=c;
		c=m;
	}
	if(b<c)
	{
		m=b;
		b=c;
		c=m;
	}
	m=a*b*c;
	n=a;
	for(;n<=m;n++)
	{
		if((n%a==0 && n%b==0) && n%c==0 )
			break;
		
	
	
	
	}
	printf("三个数的最小公倍数为:%d",n);
	system("PAUSE");
	return 0;
	
	
	
	}



