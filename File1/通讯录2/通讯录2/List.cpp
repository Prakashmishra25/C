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
		delete q;
		--m_iLen;
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