Typedef struct{
	ElemType *elem;
	int top[2];
	int size;
}twostack;
//初始化
Status Initstack(twostack &s,int size)
{
	s.elem=(ElemType*)malloc(sizeof(ElemType)*sizeof);
	s.size=size;
	s.top[0]=0;
	s.top[1]=size-1;
	return OK;
}
//插入栈
Status Push(twostack &s,int i,ElemType x)
{
	if(s.top[]==s.top[1])return ERROR;
	else if(i==0)
	{
		s.elem[s.top[0]]=x;
		s.top[0]+=1;
	}
	else if(i==1)
	{
		s.elem[s.top[1]]=x;
		s.top[1]+=1;
	}
	return OK;

}
//出栈
Status pop(twostack &s,int i,ElemType &x)
{
	if(s.top[1]==s.size-1&&i==1)return ERROR;
	else(s.top[0]==0&&i==0)return ERROR;
	else if(i==0){
		s.top[0]-=1;
		x=s.elem[s.top[0]];
	}
	else if(i==1)
	{
		s.top[1]+=1;
		x=s.elem[s.top[1]];
	}
	return OK;
}
