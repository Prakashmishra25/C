/* 预处理宏，防止头文件重复包含*/
#ifndef LIST_H
#define LIST_H

#include "Node.h"

/***
 *  class List : 链表类
 */
class List
{
public:
    /* 构造函数-完成链表的初始化工作 */
	List();
    /* 析构函数-完成链表的释放工作(节点释放) */
	~List();

    /* 链表中插入数据 */
	void push(Record r);
    /* 根据下标移除链表中相应数据节点，下标超出范围返回false，否则返回true */
	bool remove(int i);
    /* 根据小标返回链表中相应节点数据 */
	Record at(int i);
    /* 返回链表长度 */
	int length();

private:
    /* 链表-头结点指针 */
	Node * m_pHead;
    /* 链表-尾节点指针 */
    Node * m_pTail;
    /* 链表-长度属性 */
    int m_iLen;
};

#endif