#include<iostream>
using namespace std;
typedef struct List
{
	int data;
	struct List * next;

}list,*Lnode;
void Y(int n, int m)
{
	Lnode first, now, pre,temp;
	first=(Lnode)malloc(sizeof(list));
	first->data=1;
	now=first;
	for(int i=2;i<=n;i++)
	{
		temp=(Lnode)new(sizeof(List));
		temp->data=i;
		temp->next=now->next;
		now->next=temp;
		now=temp;
	}
	now=now->next;
	while(n--)
	{
		for(int j=1;j<m;j++)
		{
			pre=now;
			now=now->next;
		}
		pre->next=now->next;
		first=now->next;
		delete now;
		now=first
	}
	cout<<now->data<<endl;
}
int main(void)
{
	int n,m;
	cin>>n>>m;
	Y(n,m);
	return 0;
}