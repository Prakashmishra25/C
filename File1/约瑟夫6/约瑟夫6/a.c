#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct
{
	int data[MAX];
	int length;
}Sqlist;
void CreatList((Sqlist *)&L,int a[],int n)
{
	L=(Sqlist*)malloc(sizeof(Sqlist));
	for(int i=0;i<n;i++)
	{
		L->data[i]=a[i];

	}
	L->length=n;
}
void InitList((Sqlist *) &L)
{
	L=(Sqlist*)malloc(sizeof(Sqlist));
	L->length=0;
}
void DestoryList(Sqlist *&L)
{
	free(L);
}
void Y(Sqlist *&L)
{
	int j,q;
	int t=0;
	int m=0;
	printf("请输入数到第几个人出来");
	scanf("%d",&m);
	for(q=L->length;q>=1;q--)
	{
		t=t(t+m-1)%q;
		printf("%d",L->data[t]);
		for(j=t+1;j<=q-1;j++)
		{
			L->data[j-1]=L->data[j];
		}
	}
}
int main(void)
{
	Sqlist *s;
	InitList(s);
	int a[MAX];
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		a[i]=i+1;

	}
	CreatList(s,a[],n);
	Y(s);
	DestoryList(s);
	return 0;
	


}
