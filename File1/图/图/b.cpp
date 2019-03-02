#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
#define MAX_VERTEX_NUM 20
typedef struct ArcCell
{
	VRType adj;//0 or 1;

}ArcCell,AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
typedef struct{
	VertexType vex[MAX_VERTEX_NUM];
	AdjMatrix arcs;
	int vexnum,arcnum;

}MGraph;
int GetPathNum_Len(MGraph G,int i,int j,int len)
{
if(i==j&&len==0) return 1;
else if(len>0)
{
	sum=0;
	for(int m=0;m<G.vexnum;m++)
	{
		if(G.arcs[i][m])
		{
			 sum+=GetPathNum_Len(MGraph G,int m,int j,int len-1);
		}
	}
}
return sum;
}