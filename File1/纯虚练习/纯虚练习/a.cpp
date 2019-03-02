#include<iostream>
using namespace std;
class Node
{
public:
	Node(){m_Next=NULL;}
	Node * m_Next;
	int m_iData;
};
class List
{
public:
	List();
	~List();
	void pushFront(int e);
	void pushBack(int e);
	int popFront();
	int popBack();
	int length();
	bool isEmpty();
	virtual void push(int e) = 0;
	virtual int pop() = 0;

	Node * m_pHead;
	Node * m_pTail;
	int len;
	
};
class Queue :public List
{
public:
	void push(int e)
	{
		Node *S=new Node;
		S->m_iData=e;
		S->m_Next=m_pTail->m_Next;
		m_pTail->m_Next=S;
		m_pTail=S;
		len++;

	}
	int pop()
	{
		int a;
		Node *p=m_pHead->m_Next;
		a=p->m_iData;
		m_pHead->m_Next=p->m_Next;
		delete p;
		len--;
		return  a;
	}


};
class Stack :public List
{
public:
	void push(int e)
	{
		Node *S=new Node;
		S->m_iData=e;
		S->m_Next=m_pTail->m_Next;
		m_pTail->m_Next=S;
		m_pTail=S;
		len++;
		
	}
	int pop()
	{
		int a;
		Node *p=m_pHead->m_Next;
		Node *q=m_pHead;
		for(;p!=m_pTail;)
		{
			p=p->m_Next;
			q=q->m_Next;
		}
		a=p->m_iData;
		q->m_Next=p->m_Next;
		m_pTail=q;
		delete p;
		len--;
		return a;
	}


};
List::List()
{
	m_pHead = new Node;
	m_pTail= m_pHead;
	len = 0;
	
}
List::~List()
{
	Node *p;
	for(int i=0;i<len;i++)
	{
		p=m_pHead->m_Next;
		m_pHead->m_Next=p->m_Next;
		delete p;

	}
	m_pTail=m_pHead;

}
void List::pushFront(int e)
{
	Node *S=new Node;
	S->m_iData=e;
	S->m_Next=m_pHead->m_Next;
	m_pHead->m_Next=S;
	if(m_pTail==m_pHead)
	{
		m_pTail=S;
	}
	len++;
	
}
void List::pushBack(int e)
{
	Node *S=new Node;
	S->m_iData=e;
	S->m_Next=m_pTail->m_Next;
	m_pTail->m_Next=S;
	m_pTail=S;
	len++;

}
int List::popFront()
{
	int a;
	Node *p=m_pHead->m_Next;
	a=p->m_iData;
	m_pHead->m_Next=p->m_Next;
	if(p==m_pTail)
	{
		m_pTail=m_pHead;
	}
	
	delete p;
	len--;
	return  a;


}
int List::popBack()
{
	int a;
	Node *p=m_pHead->m_Next;
	Node *q=m_pHead;
	for(;p!=m_pTail;)
	{
		p=p->m_Next;
		q=q->m_Next;
	}
	a=p->m_iData;
	q->m_Next=p->m_Next;
	m_pTail=q;
	delete p;
	len--;
	return a;
}
int List::length()
{
	return len;
}
bool List::isEmpty()
{
	if(m_pHead==m_pTail)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main(void)
{
	List *pList;
	Queue qobj;   Stack sobj;
    pList = &qobj;
    pList->push(11);
    pList->push(22);
    pList->push(33);
    pList->push(44);
    pList->push(55);
    int len = pList->length();
    for (int i = 0; i < len; i++)
    {
       cout << pList->pop() << endl;
    }
   
    pList = &sobj;
    pList->push(111);
    pList->push(222);
    pList->push(333);
    pList->push(444);
    pList->push(555);
    len = pList->length();
    for (int i = 0; i < len; i++)
    {
       cout << pList->pop() << endl;
    }
    return 0;


}