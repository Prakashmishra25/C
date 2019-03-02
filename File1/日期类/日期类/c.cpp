#include<iostream>
using namespace std;

class Line{
private:
	double m_ia;
	double m_ib;
public:
	Line(double a=0,double b=0)
	{
		m_ia=a;
		m_ib=b;

	}
	void display()
	{
		cout<<"y="<<m_ia<<"x"<<"+"<<m_ib<<endl;
	};
	double geta();

	double getb();

};
double Line::geta()
{
		return m_ia;
}
double Line::getb()
{
		return m_ib;
}

void SetPoint(Line l1,Line l2)
{
	double a=l1.geta();
	double b=l2.geta();
	double m=l1.getb();
	double n=l2.getb();
	if(a==b)
	{
		cout<<"两直线平行 ,没有交点 ！"<<endl;
	}
	else{
		double y=((n-m)/(a-b))*a+m;
		double x=(n-m)/(a-b);
		cout<<"两直线交点是 :("<<x<<","<<y<<")"<<endl;

	}
}



int main(void)
{
	
	double a,b,c,d;
	cout<<"请输入第一条直线的a和b："<<endl;
	cin>>a>>b;
	Line l1(a,b);
	l1.display();
	cout<<"请输入第二条直线的a和b："<<endl;
	cin>>c>>d;
	Line l2(c,d);
	l2.display();
	SetPoint(l1,l2);

	return 0;

}
















