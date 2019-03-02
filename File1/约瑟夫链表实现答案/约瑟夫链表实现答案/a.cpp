#include <stdio.h>
#include <stdlib.h>
#define overflow -1
typedef struct LNode
{
	int data;
	struct LNode *next;
}LNode,*LinkList;
//��ʼ��������
void InitList(LinkList *L)
{
	(*L)=(LinkList)malloc(sizeof(LNode));
	if((*L)==NULL) exit(overflow);
	(*L)->data=INT_MIN;
	(*L)->next=NULL;
}
//ͷ�巨��������
void InsertHead(LinkList *L,int n)
{
	LinkList s;
	int i;
	for(i=n;i>=1;--i)
	{
		s=(LinkList)malloc(sizeof(LNode));
		s->data=rand();
		s->next=(*L)->next;
		(*L)->next=s;
	}
}
//ͳ�ƽ�����
void statistic(LinkList L,int *add)
{
	LinkList s;
	int j=0;
	s=L;
	while(s!=NULL)
	{
		s=s->next;
		(*add)++;
	}
}
//���������
void reverseList(LinkList *L)
{
	LinkList p,q;
	p=(*L)->next;
	(*L)->next=NULL;
	while(p)
	{
		q=p;
		p=p->next;
		q->next=(*L)->next;
		(*L)->next=q;
	}
}
//��������
void sort(LinkList *L)
{
	LinkList p,s,q,t,pre;
    if(!(*L)->next || !(*L)->next->next) exit(overflow);
	else
	{
		p=(*L)->next;
		s=p->next;
		p->next=NULL;
		while(s)
		{
			q=s;
			s=s->next;
			 t=*L;
			while(t && q->data > t->data)
			{
				pre=t;
				t=t->next;
			}
			q->next=pre->next;
			pre->next=q;
		}
	}
}


void main()
{
	LinkList List,s;
	int n,count=0;
	printf("������������ĸ�����\n");
	scanf("%d",&n);
	InitList(&List);
	InsertHead(&List,n);
	s=List->next;
	while(s!=NULL)
	{
		printf("���������������:%d\n",s->data);
		s=s->next;
	}
	reverseList(&List);
	s=List->next;
	while(s!=NULL)
	{
		printf("��������ú����������:%d\n",s->data);
		s=s->next;
	}
	sort(&List);
	s=List->next;
	while(s!=NULL)
	{
		printf("�������������������:%d\n",s->data);
		s=s->next;
	}
	statistic(List,&count);
	printf("����������н��ĸ���:%d\n",count);
	system("pause");
}