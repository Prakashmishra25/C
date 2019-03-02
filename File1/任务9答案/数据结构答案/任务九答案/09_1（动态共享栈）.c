//������˳��洢�ṹʵ��һ��˫��ջ������һά����Ĵ洢�ռ��д���������ջ�����ǵ�ջ
//�׷ֱ���������������˵㡣�Ա�дʵ�����˫��ջ tws ������������
//��ʼ������ջ�ͳ�ջ���㷨��
//��TopTypeָʾ����ջ���
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
//����һ����ջ
{
	S->base1 = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
	if (!S->base1)
	{
		printf("��ʼ��ʧ��!\n");
		return 0;
	}	//�洢����ʧ��
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
			printf("����ջ������׷�ӿռ�ʧ�ܣ�\n");
			return 0;
		}
		printf("����ջ�������ֳɹ�׷��%d��Ԫ�صĿռ䣡\n",STACKINCREMENT);
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
		printf("��ջ1�����%d�ɹ���\n", e);
	}
	else if(type == 2)
	{
		*S->top2-- = e;
		printf("��ջ2�����%d�ɹ���\n", e);
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
			printf("ջ1Ϊ��,�޷�ɾ��!\n");
			return 0;
		}
		e = *--S->top1;
		//*S->top1 = -1;
		printf("��ջ1�гɹ�ɾ��%d\n", e);
		return 1;
	}
	else if (type == 2)
	{
		if (S->base2 == S->top2) {
			printf("ջ2Ϊ�գ��޷�ɾ��!\n");
			return 0;
		}
		e = *++S->top2;
		//*S->top2 = -2;
		printf("��ջ2�гɹ�ɾ��%d\n", e);
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
		printf("ջ1Ϊ��ջ��\n");
	}
	else
	{
		printf("ջ1��Ԫ�ظ���Ϊ%d,������£�\n", S.top1 - S.base1);
		for (p = S.base1; p < S.top1; p++)
		{
			printf("%d	", *p);
		}
		printf("\n");
	}
	if (S.top2 == S.base2)
	{
		printf("ջ2Ϊ��ջ��\n");
	}
	else
	{
		printf("ջ2��Ԫ�ظ���Ϊ%d,������£�\n", S.base2 - S.top2);

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
	printf("����ջ�����ս��Ϊ��\n");
	TraStack(stack);
	return 0;
}
