#include <stdio.h>
#include <stdlib.h>
#define overflow -1
typedef struct Node
{
	int coef;
	int exp;
	struct Node *next;
}LNode,*LinkList;
void init(LinkList *L)
{
	(*L)=(LinkList)malloc(sizeof(LNode));
	if((*L)==NULL) exit(overflow);
	(*L)->next=(*L);
	(*L)->coef=99;
	(*L)->exp=-99;
	
}
void createLinkList(LinkList *L,int n)
{
	LinkList s;
	int i,j;
	int p,q;
	for(i=1;i<=n;++i)
	{
		printf("请输入第%d项的系数和幂:\n",i);
		scanf("%d",&p);
		scanf("%d",&q);

		s=(LinkList)malloc(sizeof(LNode));
		s->coef=p;
		s->exp=q;
		s->next=(*L)->next;
		(*L)->next=s;
	}
}
void D(LinkList *L)
{
	LinkList p;
	p=(*L)->next;
	while(p!=*L)
	{
		p->coef=(p->coef)*(p->exp);
		--p->exp;
		p=p->next;
	}
}
void deletedata(LinkList *L)
{
	LinkList t,p;
	p=(*L);
	t=(*L)->next;
	while(p->next->exp==0)
	{
			p->next=p->next->next;
			p=p->next;
	}
}
void main()
{
	LinkList L,s;
	int i,n,a;
	printf("请输入多项式的项数:\n");
	scanf("%d",&n);
	init(&L);
	createLinkList(&L,n);
	s=L->next;
	printf("原多项式为：\n");
	while(s!=L)
	{
		printf("%d %d\n",s->coef,s->exp);
		s=s->next;
	}
	deletedata(&L);
	D(&L);
	s=L->next;
	printf("导数多项式为：\n");
	while(s!=L)
	{
		printf("%d %d\n",s->coef,s->exp);
		s=s->next;
	}
	system("pause");
	
}