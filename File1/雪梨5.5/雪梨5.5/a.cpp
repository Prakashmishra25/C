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
		L->elem[i]=i*a;
		++L->length;
	}
}

void insertList(SqList *Lc,SqList La,SqList Lb)
{
	int *p,*q,i;
	p=La.elem;
	q=Lb.elem;
	for(i=0;i<Lc->listsize;++i)
	{
		if(*p<=*q && p<=La.elem+La.length-1 && q<=Lb.elem+Lb.length-1)
		{
			Lc->elem[i]=*p;
			++Lc->length;
			++p;
		}
		else if(*p>*q && p<=La.elem+La.length-1 && q<=Lb.elem+Lb.length-1)
		{
			Lc->elem[i]=*q;
			++Lc->length;
			++q;
		}
		else if(p>La.elem+La.length-1)
		{
			Lc->elem[i]=*q;
			++Lc->length;
			++q;
		}
		else 
		{
			Lc->elem[i]=*p;
			++Lc->length;
			++p;
		}
		if(Lc->length>=Lc->listsize)
		{
			int *newbase;
			newbase=(int *)realloc(Lc->elem,(LIST_SIZE+INCREAMENT)*sizeof(int));
			Lc->elem=newbase;
			Lc->listsize+=INCREAMENT;
		}
		if(p>La.elem+La.length-1 && q>Lb.elem+Lb.length-1)
		{
			break;
		}
	}
}

void main()
{
	SqList La,Lb,Lc;
	int n,m,j;
	printf("请输入两个有序线性表中元素的总个数:\n");
	scanf("%d",&n);
	scanf("%d",&m);
	initList(&La);
	initList(&Lb);
	initList(&Lc);
	createList(&La,n,2);
	createList(&Lb,m,3);
	printf("请输出第一个有序线性表中的元素:\n");
	for(j=0;j<La.length;++j)
	{
		printf("%d\n",La.elem[j]);
	}
	printf("请输出第二个有序线性表中的元素:\n");
	for(j=0;j<Lb.length;++j)
	{
		printf("%d\n",Lb.elem[j]);
	}
	insertList(&Lc,La,Lb);
	printf("请输出合并后有序线性表中的元素:\n");
	for(j=0;j<Lc.length;++j)
	{
		printf("%d\n",Lc.elem[j]);
	}
	system("pause");
}