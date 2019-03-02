#include<stdlib.h> 
#include<stdio.h>
#include<string.h>
#include<malloc.h>
typedef struct PCB{
	
	char name[10];
	int surper;
	int rtime;
	int ntime; 
	int uTime;
	char state;

}PCB;


typedef struct pNode{
	PCB p;
	struct pNode * next;
}pNode;
typedef struct pQueue{
	pNode * front;
	pNode * rear;
	int N;	
}pQueue;



void init(PCB l){
	l.
	
	
}


void initPCB(PCB *pcb,int n,int *T) {
	int i;
	int t=-1;
	for(i=1;i<=n;i++){
		printf("���������%d�����̵���Ϣ��\n",i);
		printf("\t������(pname)<Ψһ>:");
		scanf("%s",pcb[i].pname);
		printf("\t���ȼ�(pri):");
		scanf("%d",&pcb[i].pri);
		printf("\t����ʱ��(arrivalTime):");
		scanf("%d",&pcb[i].arrivalTime);
		if(pcb[i].arrivalTime>t)
			t=pcb[i].arrivalTime;
		printf("\t����ʱ��(runTime):");
		scanf("%d",&pcb[i].runTime);
		printf("-----------------------------------\n") ;
		pcb[i].cpuTime=0;
		pcb[i].pswr=W;
	}
	*T=t;
}


//�����
void insertQue(pQueue *que,PCB p) {
	pNode *node;
	node=(pNode*)malloc(sizeof(pNode));
	
	node->p=p;
	node->next=NULL;
	if(que->front==NULL){
		que->front=node;
	}
	else{
		pNode *q=que->front;
		for(int i=1;i<que->N;i++){
			if(i==1 && node->p.pri>que->front->p.pri){
				node->next=que->front;
				que->front=node;
				break;
			}
			if(node->p.pri>q->next->p.pri){
				node->next=q->next;
				q->next=node;
				break;
			}
			q=q->next;
		}
	}
}

//����
void deQueue(pQueue *que,PCB *pcb){
	pNode * node;
	node=que->front;
	*pcb=que->front->p;
	if(node->next!=NULL)
		que->front=node->next;
	else
		que->front=NULL;
	free(node);
}

void MyPrint(PCB *pcb,int n){
	int w=0,r=0,f=0;
	for(int i=1;i<=n;i++){
		printf("����%d�����̵���Ϣ��\n",i);
		printf("\t������(pname):%s\n",pcb[i].pname);
		printf("\t���ȼ�(pri):%d\n",pcb[i].pri);
		printf("\t����ʱ��(arrivalTime):%d\n",pcb[i].arrivalTime);
		printf("\t����ʱ��(runTime):%d\n",pcb[i].runTime);
		printf("\t����CPUʱ��(cpuTime):%d\n",pcb[i].cpuTime);
		printf("\t����״̬(pswr):%d\n",pcb[i].pswr);
		
		switch(pcb[i].pswr){
			case 0:
				w++;
				break;
			case 1:
				r++;
				break;
			case 2:
				f++;
				break;
		}
		
	}
	printf("w:%d,r:%d,f:%d\n",w,r,f);
	printf("-----------------------------------\n") ;
}

//���̵���
void TaskHanding(PCB *pcb,int N,int T,pQueue *que) {
	int order=1;	//���� 
	int n=1;		//׼����ɵ�n������ 
	int t=1;
	while(n<=N){
		printf("����%d�˵��ȡ�\n",order);
		//����Ƿ����½��̵��� 
		if(t<=T){
			for(int i=1;i<=N;i++)
				if(pcb[i].arrivalTime==t){
					pcb[i].arrivalTime=-1;
					insertQue(que,pcb[i]);				
				}
			t++;
		}
		//����
		if(que->front!=NULL){
			//�������ȼ���߽��� 
			PCB p;

			deQueue(que,&p);
			
			//���
			int at;
			for(int i=1;i<=que->N;i++) 
				if(strcmp(pcb[i].pname,p.pname)==0){
					at=i;
					break;
				}	
			
			pcb[at].cpuTime++;
			//RUN
			pcb[at].pswr=R;
			//�ж��Ƿ�ִ����� 
			if(pcb[at].cpuTime==pcb[at].runTime){
				pcb[at].pswr=F;
				n++;
			}
			else{
				pcb[at].pri--;
				pcb[at].pswr=W;
				insertQue(que,pcb[at]);
			}
		}
		MyPrint(pcb,que->N);
		order++;
	}
}
//-----------------------------------------
int main(void){
	//��ʼ�� 
	PCB *pcb;
	pQueue que;
	initQueue(&que) ;

	printf("��������Ҫ���ȵĽ��̸���N��");
	scanf("%d",&que.N);
	pcb=(PCB*)malloc((que.N+1)*sizeof(PCB));
	
	int T;	//��ٵ���ʱ�� 
	initPCB(pcb,que.N,&T);
	printf("��ʼ���ȡ�\n");
	TaskHanding(pcb,que.N,T,&que);
	
	return 0;
}
