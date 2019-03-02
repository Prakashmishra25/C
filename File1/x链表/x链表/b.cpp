#include<stdio.h>
#include<iostream>
#include<malloc.h>
#include <memory.h>
#include<stdlib.h>
#define Elemtype int
using namespace std;
typedef struct Node
{
	Elemtype data;				
	struct Node *next;			
} LNode, *LinkList;
void InitList(LinkList *L)
{
	(*L)=(LinkList)malloc(sizeof(LNode));
	(*L)->data=0;
	(*L)->next=NULL;
	
}

void createLinkList(LinkList *L,int n)
{
	LinkList s;
	int i;
	int p;
	for(i=1;i<=n;++i)
	{
		printf("请输入第%d项的数据项:\n",i);
		scanf("%d",&p);
		s=(LinkList)malloc(sizeof(LNode));
		s->data=p;
		s->next=(*L)->next;
		(*L)->next=s;
	}
}
LinkList Add(LinkList A,LinkList B)
{
	int carry=0;
	LinkList pa=A->next;
	LinkList pb=B->next;
	LinkList newList=(LinkList)malloc(sizeof(LNode));
	newList->data=0;
	LinkList newNode=newList;
	while(pa!=NULL||pb!=NULL||carry!=0)
	{
		int ta=0;
		if(pa!=NULL)ta+=pa->data;
		if(pb!=NULL)ta+=pb->data;
		ta+=carry;
		carry=ta/10;
		ta%=10;
		LinkList pNode=(LinkList)malloc(sizeof(LNode));
		pNode->data=ta;
		newNode->next=pNode;
		newNode=newNode->next;
		if(pa!=NULL)pa=pa->next;
		if(pb!=NULL)pb=pb->next;

	}
	newNode->next=NULL;
	return newList->next;

}
void display(LinkList S)
{
	LinkList p=S;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
}
int main(void)
{
	LinkList S,P,T;
	InitList(&S);
	InitList(&P);
	createLinkList(&S,3);
	createLinkList(&P,3);
	T=Add(S,P);
	display(T);
	
	return 0;
	
}
