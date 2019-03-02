#include<iostream>
using namespace std;
class Box
{
public:
	Box(int aL,int aW,int aH);
	Box();
	Box(const Box &r);
	~Box();
	static void displayCount();

private:
	int m_iLength;
	int m_iWidth;
	int m_iHeight;
	static int s_iCount;
};
int Box::s_iCount=0;
Box::Box(int aL,int aW,int aH)
{
	m_iLength=aL;
	m_iWidth=aW;
	m_iHeight=aH;
	s_iCount++;

}
Box::Box()
{
	s_iCount++;
}
Box::~Box()
{
	s_iCount--;
	
}
Box::Box(const Box &r)
{
	m_iLength=r.m_iLength;
	m_iWidth=r.m_iWidth;
	m_iHeight=r.m_iHeight;
	s_iCount++;

}
void Box::displayCount()
{
	cout<<"箱子的数量: "<<Box::s_iCount<<endl;

}

int main(void)
{

	Box::displayCount();
	Box b1,b2(1,2,3);
    Box *pb = new Box(1,1,1);
    Box::displayCount();
    Box b3 = b1;
    b3.displayCount();
    delete pb;
	b2.displayCount();
	return 0;

}