#include<stdio.h>
#include<stdlib.h>
#define  MaxSize 100

typedef int ElemType;
typedef struct{
	ElemType *data;
    int top[2];
	int size;
}SqStack;

void InitStack(SqStack*);
void Push(SqStack*,ElemType,int);
void Pop(SqStack*,ElemType*,int);

//初始化共享栈
void InitStack(SqStack *s)
{
	s->data=(ElemType *)malloc(MaxSize*sizeof(ElemType));
	if(s->data==NULL) exit(-1);
    s->top[0]=-1;
    s->top[1]=MaxSize;
	s->size=MaxSize;
}
//入栈操作
void Push(SqStack*s, ElemType x, int n)
{
	int a;
    if(n<0||n>1){
        printf("参数非法！\n");
        exit(-1);
    }
    if(s->top[1]-s->top[0]==1){
        printf("共享栈已满\n");
        exit(-1);
    }
    switch(n){
        case 0:a=s->top[0];
			       s->data[++s->top[0]]=x;
			       printf("%d向第一个栈入栈成功，元素的下标为%d!\n",x,s->top[0]);
			       break;
        case 1:a=s->top[1];
			      s->data[--s->top[1]]=x;
			      printf("%d向第二个栈入栈成功，元素的下标为%d!\n",x,s->top[1]);
			      break;
    }
}
//出栈操作
void Pop(SqStack *s, ElemType* x,int n)
{
	int a;
    if(n<0||n>1){
        printf("参数非法!\n");
        exit(-1);
    }
    switch(n){
        case 0:
            if(s->top[0]==-1){
                printf("第一个栈为空栈，不能出栈\n");
				exit(-1);
            }
            *x=s->data[s->top[0]];
			--s->top[0];
			printf("第一个栈的栈顶,下标为%d元素出栈成功!\n",s->top[0]+1);
            break;
        case 1:
            if(s->top[1]==MaxSize){
                printf("第二个栈为空栈，不能出栈!\n");
            }
            *x=s->data[s->top[1]];
			++s->top[1];
			printf("第二个栈的栈顶,下标为%d元素出栈成功!\n",s->top[1]-1);
            break;
    }
}

void main(void)
{
    SqStack s;
	int i,result;
	ElemType x;
	int n;
    InitStack(&s);
	for(i=0;i<10;++i)
	{
		x=rand()%8;
		n=rand()%2;
		Push(&s,x,n);
	}
    /*Pop(&s,&x,n);*/
	for(i=0;i<10;++i)
	{
		n=rand()%2;
		Pop(&s,&result,n);
	}
    system("pause");
}
