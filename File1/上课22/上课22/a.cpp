#include<iostream>
#include<string>
using namespace std;
class MyNode
{
public:
	MyNode(int num,MyNode *p):data(num),next(p){}
	
	int &getData(){return data;}
	MyNode *getNext(){return next;}
	void setData(int num){data=num;}
	void setNext(MyNode *p){next=p;}
private:
	int data;
	MyNode *next;
};
class MyList
{
public:
	MyList & operator=(const MyList l)
	{
		clean();
		head=NULL;
		len=0;
		MyNode *p=l.head;
		while(p)
		{
			push(p->getData());
			p=p->getNext();
		}

	}
	MyList(){head=NULL;len=0;}
	~MyList(){clean();}
	MyList(const MyList & l)
	{
		head=NULL;
		len=0;
		MyNode *p=l.head;
		while(p)
		{
			push(p->getData());
			p=p->getNext();
		}

	}
	void clean()
	{
		while(head)
		{
			MyNode *p=head;
			head=head->getNext();
			delete p;
		}
		len=0;
	}
	void push(int num)
	{
		MyNode *newNode=new MyNode(num,NULL);
		if(head)
		{
			MyNode *t=head;
			while(head->getNext())
			{
				t=t->getNext();
			}
			t->setNext(newNode);
		}
		else
		{
			head=newNode;
		}
		len++;
		
	}
	int & operator[](const  int index)
	{
		if(index>=len)
		{
			exit(1);
		}
		MyNode *p=head;
		for(int i=0;i<index;i++)
		{
			p=p->getNext();
		}
		return p->getData();
	}
private:
	MyNode *head;
	int len;
};
/*class MyArr
{
public:
	int & operator[](const unsigned int index )
	{
		return arr[index];
	}
	int arr[10];
};*/
int main(void)
{
	//MyArr a;
	//a[10];
	
	//l2=l1;//l2 operator =(l1)
	







	return 0;
}