/*#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int k=0;
	int i;
	int b;
	for(i=1;i<=5;i++)
	{
		b=i%2;
		while(b-->=0)
		{
			k++;
		}
	}
	printf("%d",k);
	system("pause");
	return 0;
}*/

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

