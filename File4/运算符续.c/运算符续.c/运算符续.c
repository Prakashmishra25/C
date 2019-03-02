#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	double a=100;
	double sum=0;
	int i=1;
	while(i<11)
	{
		a=a/2;
		sum+=a;
		i++;
	
	}
	printf("反弹总高度为:%.6f\n",sum);
	system("PAUSE");
	return 0;
}