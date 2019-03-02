
#include"List.h"
#include<stdlib.h>
#include<iostream>
using namespace std;
	Node * m_pHead;
    Node * m_pTail;
    int m_iLen;

  /* 构造函数-完成链表的初始化工作 */
	List::List()
	{
		m_pHead=new Node;
		m_pTail=m_pHead;
		m_iLen=0;

		
		
	}

    /* 析构函数-完成链表的释放工作(节点释放) */
	List::~List()
	{
		Node *p;
		while(m_pHead!=NULL)
		{
			p=m_pHead;
			m_pHead=m_pHead->getNext();
			delete p;

			
		}




		/*Node *t, *n;
		t=m_pHead;
		n=t;
		while(t)
		{
			n=t->getNext();
			delete t;
			t=n;
		}
		m_pHead=NULL;
		m_pTail=NULL;
		m_iLen=0;*/

	}

	void List::push(Record r)
	{
		Node *p=new Node;
		p->setRecord(r);
		m_pTail->setNext(p);
		m_pTail=p;
		++m_iLen;
		
	}
	bool List::remove(int i)
	{
		Node* p=m_pHead;
		int j=1;
		while(j<i)
		{
			p=p->getNext();
			++j;
		}
		if(p->getNext()==NULL) return false;
		Node *q=p->getNext();
		p->setNext(q->getNext());
		/*if(m_ilen==i+1)
		{
		}*/
		delete q;
		--m_iLen;
		/*if(m_pTail==0)
		{
		}*/
		return true;
	}
	Record List::at(int i)
	{
		Node* p=m_pHead->getNext();
		int j=1;
		while(p && j<i)
		{
			p=p->getNext();
			++j;
		}
		return p->getRecord();

	}

	int List::length()
	{
		return m_iLen;
	}



































/*#include"List.h"
#include<stdlib.h>
#include<iostream>
using namespace std;
List::List()
{
	m_pHead=new Node;
	m_pTail=m_pHead;
	m_iLen=0;

}*/
    /* 析构函数-完成链表的释放工作(节点释放) */
/*List::~List()
{
	Node *p,*q;
	p=m_pHead;
	while(p)
	{
		q=p->getNext();
		delete p;
		p=q;
		
	}
	Node *b=m_pHead->getNext();
	b=NULL;

}*/

    /* 链表中插入数据 */
/*void List::push(Record r)
{
	Node *s=new Node;
	s->setRecord(r);
	m_pTail->setNext(s);
	m_pTail=s;
	cout<<"[新建联系人成功！]";
	m_iLen++;
	system("pause");
	system("cls");



}*/
    /* 根据下标移除链表中相应数据节点，下标超出范围返回false，否则返回true */
/*bool List::remove(int i)
{


	Node* p=m_pHead->getNext();
	int j=1;
	while(p->getNext() && j<i-1)
	{
		p=p->getNext();
		++j;
	}
	if(p->getNext()==NULL) return false;
	Node *q=p->getNext();
	p->setNext(q->getNext());
	delete q;
	--m_iLen;
	return true;

	/*int n=1;
	Node *p=m_pHead;
	if(i> m_iLen)
	{
		return false;
	}
	else
	{
		while(n<i)
		{
			p=p->getNext();

		}
		Node *q=p->getNext();
		p->setNext(q->getNext());
		//Node *f=p->getNext();
		//f=p->getNext()->getNext();
		delete q;
		m_iLen--;
		return true;

	}


}*/
    /* 根据小标返回链表中相应节点数据 */
/*Record List:: at(int i)
{
	int n=0;
	while(n<i)
	{
		m_pHead=m_pHead->getNext();
		n++;
	}
	return m_pHead->getRecord();



}
    
int List::length()
{
	return m_iLen;
}*/

