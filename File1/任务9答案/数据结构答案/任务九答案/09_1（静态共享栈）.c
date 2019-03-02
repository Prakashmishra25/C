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

//��ʼ������ջ
void InitStack(SqStack *s)
{
	s->data=(ElemType *)malloc(MaxSize*sizeof(ElemType));
	if(s->data==NULL) exit(-1);
    s->top[0]=-1;
    s->top[1]=MaxSize;
	s->size=MaxSize;
}
//��ջ����
void Push(SqStack*s, ElemType x, int n)
{
	int a;
    if(n<0||n>1){
        printf("�����Ƿ���\n");
        exit(-1);
    }
    if(s->top[1]-s->top[0]==1){
        printf("����ջ����\n");
        exit(-1);
    }
    switch(n){
        case 0:a=s->top[0];
			       s->data[++s->top[0]]=x;
			       printf("%d���һ��ջ��ջ�ɹ���Ԫ�ص��±�Ϊ%d!\n",x,s->top[0]);
			       break;
        case 1:a=s->top[1];
			      s->data[--s->top[1]]=x;
			      printf("%d��ڶ���ջ��ջ�ɹ���Ԫ�ص��±�Ϊ%d!\n",x,s->top[1]);
			      break;
    }
}
//��ջ����
void Pop(SqStack *s, ElemType* x,int n)
{
	int a;
    if(n<0||n>1){
        printf("�����Ƿ�!\n");
        exit(-1);
    }
    switch(n){
        case 0:
            if(s->top[0]==-1){
                printf("��һ��ջΪ��ջ�����ܳ�ջ\n");
				exit(-1);
            }
            *x=s->data[s->top[0]];
			--s->top[0];
			printf("��һ��ջ��ջ��,�±�Ϊ%dԪ�س�ջ�ɹ�!\n",s->top[0]+1);
            break;
        case 1:
            if(s->top[1]==MaxSize){
                printf("�ڶ���ջΪ��ջ�����ܳ�ջ!\n");
            }
            *x=s->data[s->top[1]];
			++s->top[1];
			printf("�ڶ���ջ��ջ��,�±�Ϊ%dԪ�س�ջ�ɹ�!\n",s->top[1]-1);
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
