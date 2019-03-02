#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[7]={4,6,1,77,88,99,3};
	int i,j,min;
	for(j=0;j<6;j++)
	{
		for(i=0;i<6-j;i++)
		{
			if(a[i]>a[i+1])
			{
				min=a[i];
				a[i]=a[i+1];
				a[i+1]=min;
			}
		}
	
	}
	for(i=0;i<7;i++)
	{
		printf("%d\n",a[i]);
	}
	system("PAUSE");
	return 0;

}