void text(int sum)
{
	Stack s;
	int x;
	scanf(x);
	InitStack(s);
	while(x)
	{
		Push(s,x);
		scanf(x);
	}
	sum=0;
	printf(sum);
	while(pop(s,x)){
		sum+=x;
		printf(sum);
	}

}