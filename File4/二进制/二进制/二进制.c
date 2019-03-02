#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	
	int a, c;
	int b=0;
	char b[100];
	scanf("%d",&a);
	itoa(a,b,2);
	printf("%s", b);
	c=(int)b;
	while(c!=0)
	{
		c=c & (c-1);
		b++;

	
	
	
	}
	printf("%d",b);1
	return 0;
	
	
	
	}



