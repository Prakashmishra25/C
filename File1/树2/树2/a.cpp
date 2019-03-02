#define INFINITY INT_MAX
#define MAX_VERTEX_NUM 20
typedef enum{DG,DN,UDG,UDN;}GraphKind;
type struct ArcCell
{
	VRType adj;
	InfoType *info;
}ArcCell,AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
typedef struct
{
	VertexType vexs[];
	AdjMatrix arcs;
	int vexnum,arcnum;
	GraphKind kind;
}MGraph;3
//..........................
#define MAX_VERTHE_NUM 20
typedef struct ArcNode{
	int adjvex;
	struct ArcNode *nextarc;
	InfoType *info;
}ArcNode;
typedef struct VNode
{
	VertexType data;
	ArcNode *firstarc;
}VNode,AdjList[MAX_VERTEX_NUM];

typedef struct {
	AdjList vetices;
	int vexnuum,arcnum;
	int kind;
}
