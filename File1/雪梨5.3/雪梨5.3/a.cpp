#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define LIST_SIZE 100
#define INCREAMENT 10
#define overflow -1
typedef struct
{
	int *elem;
	int length;
	int listsize;
}SqList;

void initList(SqList *L)
{
	L->elem=(int *)malloc(LIST_SIZE*sizeof(int));
	if(L->elem==NULL) exit(overflow);
	L->length=0;
	L->listsize=LIST_SIZE;
}

void createList(SqList *L,int n,int a)
{
	int i;
	for(i=0;i<n;++i)
	{
		if(i>=L->listsize)
		{
			int *newbase;
			newbase=(int *)realloc(L->elem,(LIST_SIZE+INCREAMENT)*sizeof(int));
			L->elem=newbase;
			L->length+=INCREAMENT;
	   }
		L->elem[i]=rand()%10;
		++L->length;
	}
}
void sortList(SqList *L)
{
	int i,j,min,count;
	for(i=0;i<L->length;++i)
	{
		min=L->elem[i];
		for(j=i;j<L->length;++j)
		{
			if(L->elem[j]<=min)
			{
				min=L->elem[j];
				count=j;
			}
		}
		L->elem[count]=L->elem[i];
		L->elem[i]=min;
	}
}

void intersection(SqList *Lc,SqList La,SqList Lb)
{
	int i,j,k;
	int count,len;
	count=-1;

	i=0;
	
		for(j=0;j<La.length;++j)
		{
			for(k=0;k<Lb.length;++k)
			{
				if(La.elem[j]==Lb.elem[k] &&La.elem[j]!=count)
				{
					Lc->elem[i]=La.elem[j];
					++Lc->length;
					count=Lc->elem[i];
					++i;
				}
			}
		}
	
}

void main()
{
	SqList La,Lb,Lc;
	int n,m,j;
	printf("�����������������Ա���Ԫ�ص��ܸ���:\n");
	scanf("%d,%d",&n);
	scanf("%d,%d",&m);
	initList(&La);
	initList(&Lb);
	initList(&Lc);
	createList(&La,n,2);
	createList(&Lb,m,3);
	printf("�������һ�����Ա��е�Ԫ��:\n");
	for(j=0;j<La.length;++j)
	{
		printf("%d\n",La.elem[j]);
	}
	printf("������ڶ������Ա��е�Ԫ��:\n");
	for(j=0;j<Lb.length;++j)
	{
		printf("%d\n",Lb.elem[j]);
	}
	sortList(&La);
	sortList(&Lb);
	printf("�������һ����������Ա��е�Ԫ��:\n");
	for(j=0;j<La.length;++j)
	{
		printf("%d\n",La.elem[j]);
	}
	printf("������ڶ�����������Ա��е�Ԫ��:\n");
	for(j=0;j<Lb.length;++j)
	{
		printf("%d\n",Lb.elem[j]);
	}*/
	intersection(&Lc,La,Lb);
	printf("����������������Ա�Ľ���:\n");
	for(j=0;j<Lc.length;++j)
	{
		printf("%d\n",Lc.elem[j]);
	}
	for(j=0;j<Lc.length;++j)
	{
		La.elem[j]=Lc.elem[j];
	}
	La.length=Lc.length;
	printf("�����A���е�Ԫ�أ���A��Ŀռ���C��:\n");
	for(j=0;j<La.length;++j)
	{
		printf("%d\n",La.elem[j]);
	}
	system("pause");
}