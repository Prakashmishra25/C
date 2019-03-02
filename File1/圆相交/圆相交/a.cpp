#include<iostream>
#include<cmath>
using namespace std;
class circle{
public:
	void setData(int x,int y,int r);
	
	int getR();
	int getX();
	int getY();
	double culArea();
	void displayData()
	{
		cout<<"Position:("<<x<<","<<y<<")"<<"R="<<r<<" "<<"Area ="<<culArea()<<endl;
	};
	

private:
	int x;
	int y;
	int r;
};


bool funJudge(circle c1,circle c2){
	int a=c1.getX();
	int b=c1.getY();
	int c=c2.getX();
	int d=c2.getY();
	int m=c1.getR();
	int n=c2.getR();
	int p=m+n;
	int s;
	if(m>n)
	{
		s=m-n;
	}
	else{
		s=n-m;
	}
	double q=(c-a)*(c-a)+(d-b)*(d-b);
	double t= sqrt(q);
	if((t<p)&&(t>s))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void circle::setData(int a,int b,int c){
	 x=a;
	 y=b;
	 r=c;

}
int circle::getR()
{
	return r;
}
int circle::getX()
{
	return x;
}
int circle::getY()
{
	return y;
}
double circle::culArea(){
	double area;
	area=r*r*3.14;
	return area;

}

int main(void){
	circle c1,c2;
	int x,y,z;
	cout<<"请输入第一个圆c1的坐标X、Y和半径R信息："<<endl;
	cin>>x>>y>>z;
	c1.setData(x,y,z);
	c1.displayData();
	int m, n ,t;
	cout<<"请输入第二个圆c2的坐标X、Y和半径R信息："<<endl;
	cin>>m>>n>>t;
	c2.setData(m,n,t);
	c2.displayData();
	bool s;
	s=funJudge(c1,c2);
	if(s){
		cout<<"两圆相交"<<endl;
	}
	else{
		cout<<"两圆不相交"<<endl;
	}
	

	return 0;


}