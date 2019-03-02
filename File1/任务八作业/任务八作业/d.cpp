//假设字符序列由顺序表list储存
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
		if(p!=q)return false;//不是回文
	}
	return Ok;//是回文
}