#include<stdio.h>
#include<stdlib.h>
int simplify(int p,int p)
int main()
{
	int num, t, d;
	while(scanf("%d",&num))
	{
		int sum=0;
		for (int i=2;i<num;i++)
		{
			t=num;
			while(t)
			{
				sum+=(t%i);
				t/=i;
			}
			
		}
		d=simplify(sum,num-2);
		printf("%d/%d",sum/d,(num-2)/d);

	}
	return 0;
}
int simplify(int p,int q)
{
	if(p%q==0)return q;
	return simplify(q,p%q);
}