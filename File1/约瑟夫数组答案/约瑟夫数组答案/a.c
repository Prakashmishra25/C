#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define LISTSIZE 1024
#define INCREMENT 1024
typedef struct
{
	int *elem;
	int length;
	int listsize;
}SqList;
//初始化
int init(SqList*L)
{
	L->elem=(int*)malloc(LISTSIZE)*sizeof(int);
	if(L->elem==NULL)return -1;
	L->length=0;
	L->listsize=LISTSIZE;
	return 99;
}
//创建线性表
void create SqList(SqList *L,int n)
{
	int m;
	for(m=0;m<L->listsize;++m)
	{
		L->elem[m]=m+1;
		++L->length;
		if(L->length>=L->listsize)
		{
			int *newbase;
			newbase=(int*)realloc(L->elem,(INCREMENT+LISTSIZE)*sizeof(int));
			L->elem=newbase;
			L->listsize+=INCREMENT;

		}
		if(L->length==n)break;
	}
}
//循环删除
int deletecircle(SqList *L，int n,int k)
{
	int y,m,i,j=0,t,sum=n,count=0;
	for(i=0;;++i)
	{
		y=L->elem[i];
		if(L->elem[i]!=-1)
		{
			++j;
			if(j%k==0)
			{
				printf("%d\n",L->elem[i]);
				L->elem[i]=-1;
				j=0;
				if(i==n-1)
				{
					i=-1;
				}
				++count;
				continue;
			}
		}
		if(count==n-1)
		{
			break;
		}
	}
	for(i=0;i<n;++i)
	{
		if(L->elem[i]!=-1)
		{
			t=L->elem[i];
		}
	}
	return t;
}
int main(void)
{
	int a=0;
	if(a<3)
	{
		a++;
	}
	printf("%d",a);
	return 0;


}