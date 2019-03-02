#include<stdio.h>
#include<stdlib.h>
void a(int b)
{
	int s[10],i=0,rem;
	while(b)
	{
		rem=b%2;
		b=b/2;
		s[i++]=rem;
	
	}
	while(i>0)
	{
		printf("%d",s[--i]);

	}
	
}
int main(void)
{
	int n;
	printf("«Î ‰»Î:");
	scanf("%d",&n);
	a(n);
	system("pause");
	return 0;
}
