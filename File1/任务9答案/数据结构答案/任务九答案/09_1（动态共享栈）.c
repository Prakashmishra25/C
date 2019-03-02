//假设以顺序存储结构实现一个双向栈，即在一维数组的存储空间中存在着两个栈，它们的栈
//底分别设在数组的两个端点。试编写实现这个双向栈 tws 的三个操作：
//初始化、入栈和出栈的算法，
//用TopType指示两个栈类别。
#include <stdio.h>
#include <malloc.h>

#define SElemType int
#define Status int
#define STACK_INIT_SIZE 10
#define STACKINCREMENT 3

typedef enum 
{
      Type1 = 1, Type2 = 2
}TopType;

typedef struct{
	SElemType *base1;
	SElemType *base2;
	SElemType *top1;
	SElemType *top2;
	int stacksize;
}SqStack;

Status InitStack(SqStack *S)
//构造一个空栈
{
	S->base1 = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
	if (!S->base1)
	{
		printf("初始化失败!\n");
		return 0;
	}	//存储分配失败
	S->top1 = S->base1;
	S->stacksize = STACK_INIT_SIZE;
	S->base2 = S->base1 + S->stacksize - 1;
	S->top2 = S->base2;
	return 1;
}


Status Push(SqStack *S, SElemType e, TopType type)
{
	int stacksize1 = S->top1 - S->base1;
	int stacksize2 = S->base2 - S->top2;
	if (((S->top1 - S->base1) + (S->base2 - S->top2)) >= S->stacksize)// S->top1 - 1 = S->top2
	{
		S->base1 = (SElemType *)realloc(S->base1, (S->stacksize + STACKINCREMENT) * sizeof(SElemType));
		if (!S->base1)
		{
			printf("共享栈已满，追加空间失败！\n");
			return 0;
		}
		printf("共享栈已满，又成功追加%d个元素的空间！\n",STACKINCREMENT);
		S->top1 = S->base1 + stacksize1;
		S->stacksize += STACKINCREMENT;
		int *temp = S->base2;
		S->base2 = S->base1 + S->stacksize - 1;
		for (int i = 0; i < stacksize2; i++)
		{
			*(S->base2 - i) = *temp;
			temp--;
		}
		S->top2 = S->top2 + STACKINCREMENT;
	}
	if(type == 1)
	{
		*S->top1++ = e;
		printf("在栈1中添加%d成功！\n", e);
	}
	else if(type == 2)
	{
		*S->top2-- = e;
		printf("在栈2中添加%d成功！\n", e);
	}
	else
	{
		return 0;
	}
	return 1;
}

Status Pop(SqStack *S, SElemType *e, TopType type)
{
	if (type == 1)
	{
		if (S->base1 == S->top1) {
			printf("栈1为空,无法删除!\n");
			return 0;
		}
		e = *--S->top1;
		//*S->top1 = -1;
		printf("在栈1中成功删除%d\n", e);
		return 1;
	}
	else if (type == 2)
	{
		if (S->base2 == S->top2) {
			printf("栈2为空，无法删除!\n");
			return 0;
		}
		e = *++S->top2;
		//*S->top2 = -2;
		printf("在栈2中成功删除%d\n", e);
		return 1;
	}
	else
	{
		return 0;
	}
}

void TraStack(SqStack S)
{
	int * p;
	if (S.top1 == S.base1)
	{
		printf("栈1为空栈！\n");
	}
	else
	{
		printf("栈1的元素个数为%d,结果如下：\n", S.top1 - S.base1);
		for (p = S.base1; p < S.top1; p++)
		{
			printf("%d	", *p);
		}
		printf("\n");
	}
	if (S.top2 == S.base2)
	{
		printf("栈2为空栈！\n");
	}
	else
	{
		printf("栈2的元素个数为%d,结果如下：\n", S.base2 - S.top2);

		for (p = S.base2; p > S.top2; p--)
		{
			printf("%d	", *p);
		}
		printf("\n");
	}	
}

int main(void){
	SqStack stack; int e = -1;
	InitStack(&stack);

	for (int i = 0; i < 14; i++)
	{
		TopType type = (i % 2) + 1;
		Push(&stack, i, type);
		TraStack(stack);
	}
	for (int i = 0; i < 9; i++)
	{
		TopType type = (i % 2) + 1;
		Pop(&stack, &e, type);
	}
	printf("共享栈的最终结果为：\n");
	TraStack(stack);
	return 0;
}
