#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	
	int a, b, c, m, n;
	printf("�������������������Կո������:");
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
	printf("����������С������Ϊ:%d",n);
	system("PAUSE");
	return 0;
	
	
	
	}



