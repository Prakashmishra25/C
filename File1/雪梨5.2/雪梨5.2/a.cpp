#include <stdio.h>
#include <stdlib.h>
#define INIT_LIST_SIZE 1024
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
	L->elem=(int *)malloc(INIT_LIST_SIZE*sizeof(int));
	if(L->elem==NULL) exit(overflow);
	L->length=0;
	L->listsize=INIT_LIST_SIZE;
}
void createList(SqList *L,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		if(i>=L->listsize)
		{
			int *newbase;
			newbase=(int *)realloc(L->elem,(INIT_LIST_SIZE+INCREAMENT)*sizeof(int));
			L->elem=newbase;
			L->length+=INCREAMENT;
	   }
		L->elem[i]=rand()%20;
		++L->length;
	}
}
int D(SqList L)
{
	int i;
	for(i=0;i<L.length-1;++i)
	{
		if(L.elem[i]==L.elem[i+1])
		{
			return 1;
			break;
		}
	}
	return 0;
}

void main()
{
	SqList List;
	int i,n;
	char result;
	printf("���������Ա���Ԫ�ص��ܸ���:\n");
	scanf("%d",&n);
	initList(&List);
	createList(&List,n);
	result=D(List);
	for(i=0;i<n;++i)
	{
		printf("%d\n",List.elem[i]);
	}
	printf("���������Ľ��������������Ԫ��ֵ��ȣ�����1�����򷵻�0:%c\n",result);
	system("pause");
}