#include <stdio.h>
#include <stdlib.h>
typedef struct LNode
{
	int data;
	int mi;
	struct LNode *next;
}LNode,*LinkList;
//��ʼ��ѭ������
int init(LinkList *L)
{
	(*L)=(LinkList)malloc(sizeof(LNode));
	if((*L)==NULL) return -1;
	(*L)->next=(*L);
	(*L)->data=-99;
	(*L)->mi=-99;
	return 99;
}
//��������
void createLinkList(LinkList *L,int n)
{
	LinkList s;
	int i,j;
	int p,q;
	for(i=1;i<=n;++i)
	{
		printf("�������%d���ϵ��������:\n",i);
		scanf("%d,%d",&p,&q);
		s=(LinkList)malloc(sizeof(LNode));
		s->data=p;
		s->mi=q;
		s->next=(*L)->next;
		(*L)->next=s;
	}
}
//�����ʽ�ĵ���
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
//ɾ�����ý��
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
	printf("���������ʽ������:\n");
	scanf("%d",&n);
	j=init(&L);
	createLinkList(&L,n);
	s=L->next;
	printf("ԭ����ʽΪ��\n");
	while(s!=L)
	{
		printf("%d %d\n",s->data,s->mi);
		s=s->next;
	}
	deletedata(&L);
	daoshu(L,n);
	s=L->next;
	printf("��������ʽΪ��\n");
	while(s!=L)
	{
		printf("%d %d\n",s->data,s->mi);
		s=s->next;
	}
	system("pause");
}