#include<stdio.h>
#include<stdlib.h>
void bfunc(int n,int m)	
{
	int a[100], i, j ,k, num;
	for(i=1;i<=n;i++)
	{
		a[i]=1;
	}
	j=0;
	k=0;
	for(i=1;i<=n;i++)
		if(a[i]==1)
		{
			j=j+a[i];
			if(j==m)
			{
				printf("%d\n",i);
				j=0;
				a[i]=0;
				k++;
			}
			if(k==n)
			{
				num=i;
				break;
			}
		}
		if(i==n)
		{
			i=0;
		}
	{
	}
}
int main(void)
{
	int n, m;
	printf("ÈËÊý£º");
	scanf("%d",&n);
	printf("Êý×Ö:");
	scanf("%d",&m);
	bfunc(n,m);
	system("pause");
	return 0;

}
