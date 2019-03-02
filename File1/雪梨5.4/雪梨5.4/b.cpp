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
void createList(SqList *L,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		if(i>=L->listsize)
		{
			int *newbase;
			newbase=(int *)realloc(L->elem,(LIST_SIZE+INCREAMENT)*sizeof(int));
			L->elem=newbase;
			L->listsize+=INCREAMENT;
	   }
		L->elem[i]=i*2;
		++L->length;
	}
}
void deleteList(SqList *L,int i,int count)
{
	int j;
	for(j=i;j<i+count-1;++j)
	{
		L->elem[j]=L->elem[j+count];
	}
	L->length=L->length-count;
}
void main()
{
	int n,mink,maxk,i=0,j=0,count=0,max;
	SqList List;
	initList(&List);
	printf("请输入线性表中元素的总个数:\n");
	scanf("%d",&n);
	printf("请输入两个界限值，mink和maxk:\n");
	scanf("%d",&mink);
	scanf("%d",&maxk);
	createList(&List,n);
	for(j=0;j<n;++j)
	{
		printf("%d\n",List.elem[j]);
	}
	for(i=0;i<List.length;++i)
	{
		if(List.elem[i]<maxk && List.elem[i]>mink)
		{
			max=i;
			count++;
		}
	}
	deleteList(&List,max-count+1,count);
	printf("请输出删除元素之后的线性表元素:\n");
	for(j=0;j<List.length;++j)
	{
		printf("%d\n",List.elem[j]);
	}
	system("pause");
}