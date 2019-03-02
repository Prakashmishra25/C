/* 预处理宏，防止头文件重复包含*/
#ifndef NODE_H
#define NODE_H

#include "Record.h"

/***
 *  class Node : 链表节点类
 */
class Node
{
public:
    /* 构造函数 */
	Node();

    /* 设置链表节点-数据成员 */
	void setRecord(Record aR);
    /* 设置链表节点-next指针 */
	void setNext(Node *aN);

    /* 获取链表节点-数据成员 */
	Record getRecord();
    /* 获取链表节点-next指针 */
	Node * getNext();

private:
    /* 链表节点-数据成员 */
	Record m_RecData;
    /* 链表节点-next指针 */
	Node * m_Next;
};

#endif