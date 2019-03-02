#include <stdio.h>
#include <stdlib.h>
typedef struct LNode
{
	int data;
	int mi;
	struct LNode *next;
}LNode,*LinkList;
//初始化循环链表
int init(LinkList *L)
{
	(*L)=(LinkList)malloc(sizeof(LNode));
	if((*L)==NULL) return -1;
	(*L)->next=(*L);
	(*L)->data=-99;
	(*L)->mi=-99;
	return 99;
}
//创建链表
void createLinkList(LinkList *L,int n)
{
	LinkList s;
	int i,j;
	int p,q;
	for(i=1;i<=n;++i)
	{
		printf("请输入第%d项的系数和幂域:\n",i);
		scanf("%d,%d",&p,&q);
		s=(LinkList)malloc(sizeof(LNode));
		s->data=p;
		s->mi=q;
		s->next=(*L)->next;
		(*L)->next=s;
	}
}
//求多项式的导数
void daoshu(LinkList L,int n)
{
	LinkList p;
	p=L->next;
	while(p!=L)
	{
		p->data=(p->data)*(p->mi);
		--p->mi;
		p=p->next;
	}
}
//删除无用结点
void deletedata(LinkList *L)
{
	LinkList t,p;
	p=(*L);
	t=(*L)->next;
	while(p->next->data==0)
	{
			p->next=p->next->next;
			p=p->next;
	}
}

void main()
{
	LinkList L,s;
	int i,j,n,a;
	printf("请输入多项式的项数:\n");
	scanf("%d",&n);
	j=init(&L);
	createLinkList(&L,n);
	s=L->next;
	printf("原多项式为：\n");
	while(s!=L)
	{
		printf("%d %d\n",s->data,s->mi);
		s=s->next;
	}
	deletedata(&L);
	daoshu(L,n);
	s=L->next;
	printf("导数多项式为：\n");
	while(s!=L)
	{
		printf("%d %d\n",s->data,s->mi);
		s=s->next;
	}
	system("pause");
}