#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int x;
	struct node *y;
}node;

void visit(node *h)
{
	while(h!=NULL)
	{
		printf("%d\t",h->x);
		h->y;
	}
}

/*node * great(int a)
{
	int i=1;
	node *h=NULL;
	node *p=NULL;
	while(i<=a)
	{
		p=(node *)malloc(sizeof(node));
		printf("%d",&(p->x));
		p->y=h;
		=p;

	}

}*/
int main(void)
{
	node a, b, c, d;
	a.x=11;
	b.x=22;
	c.x=33;
	d.x=44;
	a.y=&b;
	b.y=&c;
	c.y=&d;
	d.y=NULL;
	node *h=&a;
	visit(h);
	system("pause");
	return 0;

}