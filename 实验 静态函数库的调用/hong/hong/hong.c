#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int x;
	struct node *y;
}node;
node * f2(int n)
{
	int i=0;
	node *p;
	node *h=NULL;
	while(i<n)
	{
		p=(node *)malloc(sizeof(node));
		printf("�������%d�����ݣ�",n-i);
		scanf("%d",&(p->x));
		p->y=h;
		h=p;
		i++;
	}
	return h;
}/*ͷ�巨*/

node *f(int n)
{
	int i=0;
	node *l=(node *)malloc(sizeof(node));
	node *s ,*r=l;
	while(i<n)
	{
		node *s=(node *)malloc(sizeof(node));
		printf("�������%d����:",i+1);
		scanf("%d",&(s->x));
		r->y=s;
		r=s;
		i++;
	}
	r->y=NULL;
	return l->y;
}/*β�巨*/

void visit(node *l)
{
	while(l!=NULL)
	{
		printf("%d\n",l->x);
		l=l->y;

	}
}/*����*/

node *inverse(node *h)
{
	node *ph=NULL;
	while(h!=NULL)
	{
		node *q=h;
		h=h->y;
		q->y=ph;
		ph=q;

	}
	return ph;
}/*����*/
node *delet(node *l,int k)
{
	int i=1;
	node *h=l, *q;
	if(k==1)
	{
		q=l->y;
		free(l);
		return q;
	}
	while((l!=NULL)&&(i<k-1))
	{
		l=l->y;
		i++;
	}
	q=l->y;
	l->y=q->y;
	free(q);
	return h;
	
}/*ɾ����k���ڵ�*/


int main(void)
{
	node *head;
	node *head2;
	head=f(5);
	visit(head);
	head2=delet(head,3);
	visit(head2);
	system("pause");
	return 0;
}


