#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b,c;
	int m=0, n=0;
	scanf("%d %d", &a,&b);
	for(c=a;c<=b;c++)
	{

		if(c%2==0)
		{
			m+=c*c;
		}
		else
		{
			n+=c*c*c;
		}
	}
	printf("%d %d",m,n);
	system("pause");
	return 0;
}