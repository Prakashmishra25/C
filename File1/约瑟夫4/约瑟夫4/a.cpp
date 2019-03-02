#include<iostream>
using namespace std;
typedef struct Node{
	int data;
	Node * next;
} NodeList;
NodeList* CreateList(int n)
{
	NodeList*p,*q,*head;
	int i=1;
	p= new NodeList();
	p->data=i;
	head=p;
	for( i=1;i<n;i++)
	{
		q=new NodeList();
		q->data=i+1;
		p->next=q;
		p=q;
	}
	p->next=head;
	return head;
	delete p;
	p=NULL;
	delete q;
	q=NULL;
}
void Y(NodeList*L,int m)
{
	NodeList*p,*q,*temp;
	int j;
	p=L;
	while (p->next!=p)
	{
		for (int j=1;j<m;j++)
		{
			q=p;
			p=p->next;
		}
		temp=p;
		
		q->next=p->next;
		p=p->next;
		delete temp;
		temp=NULL;
		
	}
	cout<<p->data<<endl;
}
int main()
{
	int m,n;
	cout<<"请分别输入总人数n,出人序号m(以空格分开)"<<endl;
	cin>>n>>m;
	NodeList * head1;
	head1=CreateList(n);
	Y(head1,m);
	return 0;
}
