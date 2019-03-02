/*#include<iostream>
using namespace std;
class A
{
public:
	A():count(1){}
	virtual ~A(){}
	virtual A* Copy()const=0;
	virtual void Out() const=0;
protected:
	int count;
};
class B:public A
{
public:
	~B(){
		--count;
		Out();
	}
	virtual A *Copy() const{
		B *p=new B(*this);
		++p->count;
		return p;
	}
	virtual void Out() const{
		cout<<count<<"";

	}
};
int main(void)
{
	B b;
	b.Out();//1
	A*a1=&b;
	a1->Out();//1
	a1=a1->Copy();
	a1->Out();//2
	delete a1;//1
	return 0;//0
}*/
#include<iostream>
using namespace std;
class CString
{
public:
	CString(const char *const str=NULL)
	{
		if(str)
		{
			int len=strlen(str);
			p=new char[len+1];
			strcpy(p,str);
		}
	}
	~CString()
	{
		if(p)
		{
			delete []p;
		}
		else
		{
			p=NULL;
		}
	}
	CString(const CString & str)
	{
		if(p)
			delete []p;
		if(str)
		{
			int len=strlen(str);
			p=new char[len+1];
			strcpy(p,str);
		}
		
	}

	CString operator=(const CString &s)
	{
		if(p)
			delete []p;
		int len=strlen(s.p);
		p=new char[len+1];
		strcpy(p,s.p);
		return *this;

	}

}
typedef struct BiTNode{
	TElemType data;
	struct BiTNode *lchild, *rchild;
}BiTNode,*BiTree;
int last=0;
void MaxLT_MinGT(BiTree T,int x)//�ҵ����������� T ��С�� x ����� Ԫ�غʹ��� x ����СԪ�� 
{
	if(T->lchild) MaxLT_MinGT(T->lchild,x); 
	if(last<x&&T->data>=x) //�ҵ���С�� x �����Ԫ�� 
		printf("a=%d\n",last); 
	if(last<=x&&T->data>x) //�ҵ��˴��� x ����СԪ�� 
		printf("b=%d\n",T->data); 
	last=T->data; 
	if(T->rchild) MaxLT_MinGT(T->rchild,x); 
}







#include<stdio.h>
typedef struct Node
{
int number;
int score;
}student;
int main()
{

	student a[50],temp;
	int m;
	printf("����ѧ�š��ɼ���");
	for(int i=0;i<50;i++)
	scanf("%d%d",&a[i].number,&a[i].score);

	for(int j=0;j<50-1;j++)
	{

		m=j;
		for(int k=j+1;k<50;j++)
			if(a[k].score>a[m].score)
			{
				m=k;
			}	
			if(m!=j)
			{
				temp=a[j];
				a[j]=a[m];
				a[m]=temp;
			}
	}
	for(int i=0;i<50;i++)
	{
		printf("%d %d",a[i].number,a[i].score);
		if((i+1)%10==0)
		printf("\n");
	}
	return 0;
}