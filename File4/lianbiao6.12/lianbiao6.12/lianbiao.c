#include<stdio.h>
#include<malloc.h>
typedef struct Node
{
	int  x;
	struct Node *y;
}Node;

Node * f(int n)
{
	int i = 0;
	Node *p;
	Node *h=NULL;
	while(i<n)
	{
		p = (Node*)malloc(sizeof(Node));
		printf("请输入第%d个数据",n-i);
		scanf("%d",&(p->x));
		p->y = h;
		h = p;
		i++;
	}
	return h;
}

void visit(Node *l)
{
	while(l!=NULL)
	{
		printf("%d\t",l->x);
		l = l->y;
	}
}
int main(void)
{
	Node *head;
	head = f(5);
	visit(head);
	return 0;
}