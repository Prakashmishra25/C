#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int sum=0;
	int i=0;
	while(1)
	{
		int x;
		printf("请输入一个整数（0表示退出）:");
		scanf("%d",&x);
		if(x==0)
		break;
		if(x>0)
		{
		sum+=x;i++;
		}
	}
	printf("你输入的正数和和个数分别为:%d %d\n",sum, i);
	system("PAUSE");
	return 0;
}

	
	
	
	



