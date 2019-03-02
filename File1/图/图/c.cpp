#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
#define MAX_VERTEX_NUM 20

typedef struct ArcNode
{
	int adjvex;
	struct ArcNode *nextarc;

}ArcNode;
typedef struct VNode{
	VertexType data;
	ArcNode *firstarc;
}VNode,AdjList[MAX_VERTEX_NUM];
typedef struct{
	AdjList vertices;
	int vexnum,arcnum;
}ALGraph;


int path[MAXSIZE],visited[MAXSIZE]; 
int Find_All_Path(ALGraph G,int u,int v,int k)
{
	path[k]=u; 
	visited[u]=1;
	if(u==v) 
	{
		printf("Found one path!\n");
		for(i=0;path[i];i++) printf("%d",path[i]); 
	}
	else
	for(p=G.vertices[u].firstarc;p;p=p->nextarc)
	{
		l=p->adjvex;
		if(!visited[l]) Find_All_Path(G,l,v,k+1);
	}
	visited[u]=0;
	path[k]=0; 
}