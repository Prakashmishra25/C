#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int sum=0;
	int i=0;
	while(1)
	{
		int x;
		printf("������һ��������0��ʾ�˳���:");
		scanf("%d",&x);
		if(x==0)
		break;
		if(x>0)
		{
		sum+=x;i++;
		}
	}
	printf("������������ͺ͸����ֱ�Ϊ:%d %d\n",sum, i);
	system("PAUSE");
	return 0;
}

	
	
	
	



