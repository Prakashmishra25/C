#include<iostream>
#include<stdio.h>
#include<malloc.h>
#include<memory.h>
using namespace std;
const int max_size=20;//为题中m
typedef struct
{
	int *q;
	int rear;
	int length;
}queue;

//初始化
void init(queue *S)
{
	S->q=(int *)malloc(max_size*sizeof(int));
	S->rear=0;
	S->length=0;
	

}
//入队
void Enqueue(queue *S,int x)
{
	if(S->length==max_size-1)return;
	S->q[S->rear]=x;
	S->rear=(S->rear+1)%max_size;
	S->length ++;


}
//出队
void Dequeue(queue *S,int x)
{
	if(S->length==0)return;
	x=S->q[((S->rear)-(S->length)+1)%max_size];
	S->length --;
	
}
//main函数内为检验代码
int main(void)
{
	queue Q;
	init(&Q);
	Enqueue(&Q,5);
	Enqueue(&Q,4);
	Enqueue(&Q,3);
	Enqueue(&Q,2);
	Enqueue(&Q,1);
	int a=Q.length;
	printf("%d",Q.q[2]);
	
	return 0;


}
