#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 20
void main()
{
	int i,j,n,k;
	char *str;
	printf("请输入一个整数,表示字符数组的大小(必须小于MAXSIZE)：");
	scanf("%d",&n);
	printf("请输入子串的长度k:");
	scanf("%d",&k);
	str=(char *)malloc((n+1)*sizeof(char));//别忘了"\0"
	for(i=0;i<n;i++)
	{
		scanf("%s",&str[i]);
	}
	printf("这个字符串的长度为%d\n",strlen(str));
	if(k>n) 
	{
		printf("这样的字符串不存在！\n");
	}
	if(k==n)
	{
		printf("满足k=n的子串只有一个，就是主串本身！\n");
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