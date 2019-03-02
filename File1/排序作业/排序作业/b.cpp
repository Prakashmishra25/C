#include<iostream>
using namespace std;
class Shape
{
public:
	Shape(double a = 0, double p = 0){m_dArea=0;m_dPerimeter=0;}
	virtual void displayArea() = 0;
	virtual void displayPerimeter() = 0;
protected:
	double m_dArea ;
	double m_dPerimeter;

};
class Circle :public Shape
{
public:
	Circle(double r = 0);
	virtual void displayArea();
	virtual void displayPerimeter();
private:
	double m_dR;
};
Circle::Circle(double r)
{
	 m_dR=r;

}
void Circle::displayArea()
{
	m_dArea= m_dR* m_dR*3.14;
	cout<<"The Circle's Area is "<<m_dArea<<endl;
	
}
void Circle::displayPerimeter()
{
	m_dPerimeter=2* m_dR*3.14;
	cout<<"The Circle's Perimeter is "<<m_dPerimeter<<endl;

}

class Rectangle :public Shape
{
public:
	Rectangle(double l = 0, double w = 0);
	virtual void displayArea();
	virtual void displayPerimeter();
private:
	double m_dLength;
	double m_dWidth;
};
Rectangle::Rectangle(double l,double w)
{
	m_dLength=l;
	m_dWidth=w;
}
void Rectangle::displayArea()
{
	m_dArea=m_dLength* m_dWidth;
	cout<<"The Rectangle's Area is "<<m_dArea<<endl;
}
void Rectangle::displayPerimeter()
{
	m_dPerimeter=2*(m_dLength+m_dWidth);
	cout<<"The Rectangle's Perimeter is "<<m_dPerimeter;

}
void displayAreaAndPerimeter(Shape &r)
{
	r.displayArea();
	r.displayPerimeter();

}
int main(void)
{
	Circle c1(9);
	Rectangle r1(2,4);
	displayAreaAndPerimeter(c1);
	displayAreaAndPerimeter(r1);
	return 0;
}