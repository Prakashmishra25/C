#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
#define MAX_VERTEX_NUM 20
#define VertexType string

typedef struct ArcNode
{
	int adjvex;
	struct ArcNode *nextarc;

}ArcNode;
typedef struct VNode{
	bool isVisited;
	VertexType data;
	ArcNode *firstarc;
}VNode,AdjList[MAX_VERTEX_NUM];
typedef struct{
	AdjList vertices;
	int vexnum,arcnum;
	int kind;
}Graph;
bool Depth_First_Traverse(Graph *pDiGraph)
{
	for(int i=0;i<pDiGraph->vexnum;i++)
	{
		pDiGraph->vertices[i].isVisited=false;
	}
	VNode vnode;
	stack<VNode>TraverseStack;
	TraverseStack.push(&(pDiGraph->vertices[0]));
	while(!TraverseStack.empty()){
		vnode=TraverseStack.top();
		vnode.isVisited=true;
		cout<<vnode.data<<endl;
		TraverseStack.pop();
		ArcNode*node=vnode.firstarc;
		while(node!=NULL)
		{
			if(!(pDiGraph->vertices[node->adjvex]).isVisited)
			{
				TraTraverseStac.push(pDiGraph->vertices[node->adjvex]);
			}
			node=node->nextarc;
		}


	}
	return true;


}