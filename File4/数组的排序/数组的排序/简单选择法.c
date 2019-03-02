#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[7]={4,6,1,77,88,99,3};
	int i=0;
	int j=0;
	int min;
	while(i<6)
	{
		int t=i;
		for(j=i+1;j<7;j++)
		{
			if(a[t]>a[j])
			{
				t=j;
			}
		}
		min=a[t];
		a[t]=a[i];
		a[i]=min;
		i++;
	}
	i=0;
	while(i<7)
	{
		printf("%d\n",a[i]);
		i++;
	
	}
	system("PAUSE");
	return 0;

}