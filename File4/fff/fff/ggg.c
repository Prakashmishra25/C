#include<stdio.h>
#include<stdlib.h>
int sum(int *a,int n)
{
	if(!n)
	{
		return 0;
	}
	return a[n-1]+sum(a,n-1);
}


int main(void)
{ 
	int n;
	int i=0;
	int *a=(int*)malloc(n*sizeof(int));
	printf("����������������ֵĸ���:");
	scanf("%d",&n);
	while(i<n)
	{
		printf("�������%d����",i+1);
		scanf("%d",&a[i]);
		i++;
	}
	printf("�����Ϊ:%d",sum(a,n));
	system("pause");
	return 0;

	
	



}
