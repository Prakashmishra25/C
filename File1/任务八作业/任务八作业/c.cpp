Typedef struct 
{
	ElemType *elem;
	int length;
	int listsize;
}sqlist;
Status check(sqlist exp)
{
	Stack s;char e;
	InitStcak(s);
	for(int i=0;i<exp.length;i++)
	{
		if(exp.elem[i]=='('||exp.elem[i]=='['||exp.elem[i]=='{'){
			Push(s,exp.elem[i]);
		}
		if(exp.elem[i]==')')
		{
			if(GetTop(s,e))
			{
				if(e=='(');
				{
					Pop(s,e);
				}
				else return ERROR;
			}
		}
		if(exp.elem[i]=='}')
		{
			if(GetTop(s,e))
			{
				if(e=='{');
				{
					Pop(s,e);
				}
				else return ERROR;
			}
		}
		if(exp.elem[i]==']')
		{
			if(GetTop(s,e))
			{
				if(e=='[');
				{
					Pop(s,e);
				}
				else return ERROR;
			}
		}
	}
	return OK;
}