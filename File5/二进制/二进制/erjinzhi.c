#include<stdio.h>
int main(void)
{
	int a,b,t;
	int result=0;
	int p=1;
	scanf("%d",&a);
	t=a;
	while((-2^16<a)&&(a<2^16))
	{
		do
		{
			b=t%2;
			result=result+p*b;
			p=p*10;
			t=t/2;

		}while(t);
		printf("%11d-->%d",a,result);
		return 0;
	}
}