#include<iostream>
#include<stdio.h>
#include<malloc.h>
#include<memory.h>
#define overflow -1
using namespace std;
const int MAX_SIZE=30;
typedef struct
{
	int *elem;
	int top0;
	int top1;
	
}twostack;
//初始化
void Init(twostack *S)
{
	S->elem=(int*)malloc( MAX_SIZE*sizeof(int));
	S->top0=0;
	S->top1=MAX_SIZE-1;
}
//入栈
void Push(twostack *S,int i,int x)
{
	if(S->top0==S->top1+1)exit(overflow);
	else if(i==0)
	{
		S->elem[S->top0]=x;
		(S->top0)++;
	}
	else if(i==1)
	{
		S->elem[S->top1]=x;
		(S->top1)--;

	}
	
}
//出栈
void Pop(twostack *S,int i,int *x)
{
	if(i==0)
	{
		if(S->top0==0)
		{
			return;
		}
		else
		{
			S->top0--;
			*x=S->elem[S->top0];
		}
	}
	if(i==1)
	{
		if(S->top1==MAX_SIZE-1)
		{
			return;
		}
		else
		{
			S->top1++;
			*x=S->elem[S->top1];
		}
	}

}
//main函数内为检验代码
int main(void)
{
	int a;
	twostack S;
	Init(&S);
	Push(&S,0,5);
	Push(&S,0,4);
	Push(&S,0,3);
	a=S.elem[(S.top0)-1];
	cout<<a<<endl;
	return 0;
}
