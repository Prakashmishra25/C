#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 20
void main()
{
	int i,j,n,k;
	char *str;
	printf("������һ������,��ʾ�ַ�����Ĵ�С(����С��MAXSIZE)��");
	scanf("%d",&n);
	printf("�������Ӵ��ĳ���k:");
	scanf("%d",&k);
	str=(char *)malloc((n+1)*sizeof(char));//������"\0"
	for(i=0;i<n;i++)
	{
		scanf("%s",&str[i]);
	}
	printf("����ַ����ĳ���Ϊ%d\n",strlen(str));
	if(k>n) 
	{
		printf("�������ַ��������ڣ�\n");
	}
	if(k==n)
	{
		printf("����k=n���Ӵ�ֻ��һ����������������\n");
		for(i=0;i<strlen(str);i++)
		{
			printf("%c",str[i]);
		}
	}
	if(k<n)
	{
		for(i=0;i<=n-k;i++)
		{
			for(j=i;j<k+i;j++)
			{
				printf("%c",str[j]);
			}
			printf("\n");
		}
	}
	system("pause");
}