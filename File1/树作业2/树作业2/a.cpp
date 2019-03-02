#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
int num(node *t)//求节点个数
{
	if(t==NULL)return 0;
	return num(t->left)+num(t->right);
}
int depth(node *t)//求高度
{
	if(t==NULL)return 0;
	int d1=depth(t->left);
	int d2=depth(t->right);
	return (d1>d2?d1:d2)+1;


}



bool IsBalanced(node *t)
{
	if(t==NULL)return true;
	int left=depth(t->left);
	int right=depth(t->right);
	int a=left-right;
	if(a>1||a<-1)return false;
	return IsBalanced(t->left)&&IsBalanced(t->right);
}

int main(void)
{
	return 0;
}
算法：
typedef struct BiTNode
{
	TElemType data;
	struct BiTNode *lchild, *rchild;
}BiTNode,*BiTree;
Status printf_EXPRESS(Bitree T)
{
	if(T->data是字母)printf("%c",T->data);
	else if(T->data是操作符)
	{
		{
			if(!T->lchild||!T->rchild)return ERROR;
			if(T->lchild->data是操作符&&T->lchild->data优先级低于T->data)
			{
				printf("(");
				if(!printf(T->lchild))return ERROR;
				prinf(")");
			}
		}
		else if(!printf_EXPRESS(T->lchild))return ERROR;
		if(T->rchild->data是操作符&&T->rchild->data优先级低于T->data)
		{
			printf("(");
			if(!printf(T->rchild))return ERROR;
			prinf(")");
		}
		else if(!Print_EXPRESS(T->rchild)) return ERROR;

	}
	else return ERROR; 
	return OK;
}
