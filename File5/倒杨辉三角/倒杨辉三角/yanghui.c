#include<stdio.h>
int main(void)
{
	int a[100][100],i,j,k;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i][i]=1;
		a[i][0]=1;
	}
	for(i=2;i<n;i++)
	{
		for (j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=n-1;i>=0;i--)
	{
		for(k=0;k<n-i-1;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%-2d",a[i][j]);
		}
		printf("\n");

	}
	return 0;

}