#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node
{
	int x;
	struct node *y;
}node;
node *f(int n)
{
	int i=0;
	node *p;
	node *h=NULL;
	while(i<n)
	{
		p=(node*)malloc(sizeof(node));
		printf("请输入第%d个数据",n-i);
		scanf("%d",&(p->x));
		p->y=h;
		h=p;
		i++;
	}
	return h;

}
void visit(node *l)
{
	while(l!=NULL)
	{
		printf("%d\t",l->x);
		l=l->y;
	}
}
int D(node *l)
{
	
	if(l->y==NULL)
	{
		return 1;
	}
	else
	{
		return 1+D(l->y);
	}
}
int main(void)
{
	int a;
	node *head;
	head=f(5);
	visit(head);
	a=D(head);
	printf("%d",a);
	system("pause");
	return 0;
	
}


