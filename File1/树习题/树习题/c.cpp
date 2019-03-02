#include<iostream>
using namespace std;
#define MAX_TREE_SIZE 100
#define TElemType int 
typedef struct PTNode
{
	TElemType data;
	int parent;

}PTNode;
typedef struct
{
	PTNode nodes[MAX_TREE_SIZE];
	int r,n;
}PTree;
//求用双亲表储存树的度
int GETDU_PTREE(PTree R)
{
	if(!R)return 0;
	int a[R.n]={0};
	for(int i=0;i<R.n;i++)
	{
		a[R.nodes[i].parent]++;

	}
	int max=0;
	for(int j=0;j<R.n;j++)
	{
		if(a[j]>max)max=a[j];

	}
	return max;
}