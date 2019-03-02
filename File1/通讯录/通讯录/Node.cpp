#include"Node.h"
Node::Node()
:m_Next(NULL)
{

}

void Node::setRecord(Record aR)
{
	m_RecData=aR;
	

}
    
void Node::setNext(Node *aN)
{
	m_Next=aN;
}

    
Record Node::getRecord()
{
	return m_RecData;
}
Node * Node::getNext()
{
	return m_Next;
}