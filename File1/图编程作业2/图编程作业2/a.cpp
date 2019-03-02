#define MAX_VERTEX_NUM 20
typedef struct ArcNode
{
	int  adjvex;
	struct ArcNode *nextarc;
	Inoftyoe info;

}ArcNode;
typedef struct VNode{
	VertexType data;
	ArcNode *firstarc;
}VNode ,adjList[MAX_VERTEX_NUM];
typedef struct{
	AdjList vertices;
	int vexnum,arcnum;

}ALGraph;
Status TopologicalOrder(ALGraph G,Stack&T)//将v1-v9的图用邻接表表示，求V1-V9各个顶点的最早发生时间，
{
	FindInDegree(G,indegree);//求各个顶点的入度
	initstack(S);cout=0;ve[0...G.vexnum-1]=0;
	while(!StackEmpty(S))
	{
		pop(S,j);push(T,j);count++;
		for(p=G.vertices[j].firstarc;p;p=p->nextarc){}
		k=p->adjvex;
		if(--indegree[k]==0)push(S,k);
		if(ve[j]+*(p->info)>ve[k])ve[k]=ve[j]+*(p->info)
	}
	
	return OK;
}
Status CriticalPath(ALGraph  G)
{
	if（!TopologicaOrder(G, T)）return ERROR;
	vl[0...G.vexnum-1]=vw[G.vexnum];
	while(!StackEmpty(T))
	{
		for(pop(T),j),p=G.vertices[j].firstarc;p;p=p->nextarc){
			k=p->adjvex;dut=*(p->info);
			if(vl[k]-dut<vl[j])vl[j]=vl[k]-dut;

		}
	}
	for(j=0;j<G.vexnum;++j)
	{
		for(p=G.vertices[j].firstrc;p;p=p->nextarc)
		{
			k=p->adjvex;dut=*(p->info);
			ee=ve[j];el=vl[k]-dut;
			tag=(ee==el)?'*':'';
			printf(j,k,dut,ee,el,tag);		}
	}
}
//.......................................................................................
void Fill_MPL(ALGraph &G)//为有向无环图 G 添加 MPL 域 
{
	FindIndegree(G,indegree); 
	for(i=0;i<G.vexnum;i++)
		if(!indegree[i]) Get_MPL(G,i);
}
int Get_MPL(ALGraph &G,int i)//从一个顶点出发构建 MPL 域并返回其 MPL 值 
{
	if(!G.vertices[i].firstarc) 
	{
		G.vertices[i].MPL=0; 
		return 0; //零出度顶点

	}
	else
	{
		max=0; 
		for(p=G.vertices[i].firstarc;p;p=p->nextarc) 
		{
			j=p->adjvex; 
			if(G.vertices[j].MPL==0) k=Get_MPL(G,j);
			if(k>max) max=k; //求其直接后继顶点 MPL 的最大者

		}
		G.vertices[i]=max+1;//再加一,就是当前顶点的 MPL return max+1; 
	}
}