//�����ַ�������˳���list����
Typedef struct{
	elemType *elem;
	int length;
	int listsize;
}sqlist;
Status check2(sqlist &list)
{
	Stack s;
	ElemType p,q;
	LinkQueue Q;
	for(i=0;i<=length-1&&list.elem[i]!='@';i++)
	{
		Push(s,list.elem[i]);
		EnQueue(Q,list.elem[i]);
	}
	for(n=0;n<=i;n++)
	{
		pop(s,p);
		DeQueue(Q,q);
		if(p!=q)return false;//���ǻ���
	}
	return Ok;//�ǻ���
}