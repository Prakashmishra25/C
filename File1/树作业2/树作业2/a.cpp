#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
int num(node *t)//��ڵ����
{
	if(t==NULL)return 0;
	return num(t->left)+num(t->right);
}
int depth(node *t)//��߶�
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
�㷨��
typedef struct BiTNode
{
	TElemType data;
	struct BiTNode *lchild, *rchild;
}BiTNode,*BiTree;
Status printf_EXPRESS(Bitree T)
{
	if(T->data����ĸ)printf("%c",T->data);
	else if(T->data�ǲ�����)
	{
		{
			if(!T->lchild||!T->rchild)return ERROR;
			if(T->lchild->data�ǲ�����&&T->lchild->data���ȼ�����T->data)
			{
				printf("(");
				if(!printf(T->lchild))return ERROR;
				prinf(")");
			}
		}
		else if(!printf_EXPRESS(T->lchild))return ERROR;
		if(T->rchild->data�ǲ�����&&T->rchild->data���ȼ�����T->data)
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
