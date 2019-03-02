#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int x, y, z, a, s=0, i=1;
	
	for(i=1;i<11;i++)
	{
		srand(time(0));
		printf("第%d题:",i);
		x=rand();
		y=rand();
		a=rand()%2;
		if(a==0)
		{
			printf("%d + %d=", x, y);
			scanf("%d",&z);
			if(z==x+y)
			{
				printf("right\n");
				s=s+10;
		
			}
			else 
			{
				printf("not correct\n");
			}
		}
		if(a==1)
		{
			printf("%d - %d=", x, y);
			scanf("%d",&z);
			if(z==x-y)
			{
				printf("right\n");
				s=s+10;
		
			}
			else
			{
				printf("not correct\n");
			}
		}
		
	
	}
	printf("总分：%d",s);
	system("pause");
	return 0;
}