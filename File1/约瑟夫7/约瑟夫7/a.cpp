#include<iostream>
#define MAX 100
using namespace std;
typedef struct{
	int data[MAX];
	int length;
}sqlist;
void C(sqlist*&l,int n)
{
	l=new sqlist();
	for(int i=0;i<n;i++)
	{
		l->data[i]=i+1;
	}
	l->length=n;

}
void J(sqlist *&l,int m)
{
	int w=0;

	int t=0;
	for(int q=l->length;q>=1;q--)
	{
		
		t=(t+m-1)%q;
		w=w+1;
		if(w==l->length)
		{
			cout<<l->data[t]<<endl;
		}
		for(int j=t+1;j<=q-1;j++)
		{
			l->data[j-1]=l->data[j];
		}
		
		
	}
	

}
int main(void){
	sqlist* s;
	int n,m;
	cout<<"请输入总人数n与出人序号m(空格分隔)"<<endl;
	cin>>n>>m;
	C(s,n);
	J(s,m);
	return 0;
}