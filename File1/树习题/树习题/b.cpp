#include<iostream>
using namespace std;
#define ElemTyoe int
typedef struct CSNode
{
	ELemType data;
	struct CSNode *firstchild, *nextsibling;

}CSNode,* CSTree;
//�����ֵܱ����������
int Depth_CStree(CSTree T)
{
	if(!T)return 0;
	CSTree p;
	for(int max=0,p=T->firstchild;p;p=p->nextsibling)
	{
		if((d=Depth_CSTree(p))>max)max=d;
	}
	return max+1;
}
