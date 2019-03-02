/* #include<stdio.h>
#include<stdlib.h>
int num(int a)
{
	if(a==1)
	{
		return 10;
	}
	else
	{
		return num(a-1)+2;
	}
}
int main(void)
{
	int a=5;
	printf("第五个人的年龄为：%d",num(5));
	system("pause");
	return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	int m;
	int i;
	int n;
	printf("请输入鞭炮的个数:");
	scanf("%d",&a);
	i=1;
	m=(a-1)*3+1;
	n=m;
	while(i<=m)
	{
		if((i%1==0)&&(i%2==0)&&(i%3==0))
		{
			n-=1;
		}
		i++;
	}
	printf("time:%d\n",m);
	printf("count:%d",n);
	system("pause");
	return 0;


}*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char a[6]="hello";
	char b[3][6]={{"hello"},{"china"},{"ddddd"}};
	printf("%d\n",strcmp(a,b[0]));
	printf("%s\n",strcat(a,b[0]));
	printf("%s\n",strcpy(a,b[1]));
	printf("%d",strlen(b[1]));
	system("pause");
	return 0;
}