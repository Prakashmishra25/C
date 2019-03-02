#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,m;
	scanf("%d",&a);
	for(m=2;m<(a/2+1);m++)
	{
		if(a%m==0)
		{
			printf("N");
			system("pause");
			return 0;

			
		}
	}
	printf("Y");
	system("pause");
	return 0;
	
}