#include<iostream>
#define MAX_TREE_SIZR 20
using namespace std;
//��������ṹ
typedef struct CTNode
{
	int child;
	struct CTNode *next;
}*ChildPtr;
typedef struct
{
	TElemType data;
	ChildPtr firstchild;
}CTBOX;
//��֪����±����Ӹ���
typedef struct
{
	CTBOX nodes[MAX_TREE_SIZR];
	int n,r;
}CTree;
int GetNodenumber(CTree S,int i)
{
	if(i<0||i>=100)exit(-1);
	ChildPtr p=S.nodes[i];

	for(int i=0;p!=NULL;i++)
	{
		p=p->next;
	}
	return i;
}
//��������ṹ�������Ķ�
int GetDU(CTree S)
{
	if(!S)return 0;
	int q=S.n;
	int p=0;
	int j;
	for(int i=0;i<q;i++)
	{
		j=GetNodenumber(S,i);
		if(j>p)p=j;

	}
	return p;

}