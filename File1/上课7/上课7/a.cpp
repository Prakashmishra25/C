#include<iostream>
using namespace std;

/*class point {
public:
	int x;
	int y;
};//默认私有；
class rect{
public:
	void setpoint(int x1,int x2,int y1,int y2);//成员函数说明；//若为类内定义默认为内联函数（inline 代码替换；会使代码区变大，exe文件多。内存与时间的计较）；
	void printArea();

private:
	point p1;
	point p2;


};




void rect::setpoint(int x1,int x2,int y1,int y2)
{
	p1.x=x1; p1.y=y1;
	p2.x=x2; p2.y=y2;//public;




}//类外定义；
void rect::printArea(){
	int w=p2.x-p1.x;
	if(w<0){
		w*=-1;
	}
	int h=p1.y-p2.y;
	if(h<0)h*=-1;
	cout<<"面积为"<<w*h<<endl;
}

int main(void)
{
	point p1;
	//p1.x=10;//默认情况下错误
	p1.x=10;
	rect r;
	r.setpoint(0,3,0,4);
	r.printArea();
	return 0;

}*/

class A{
public:
	char c;
	int i;
	void fun(){
		cout<<"你好"<<endl;

	}//在代码区保存函数；

};
A text;//全局变量；text有自己的内存，在main函数执行之前，在return之后释放；静态生存周期；在静态全局区；
void fun(){
	static int i=0;//程序运行之前就存在，存在 存在（再运行当做看不到）
	cout <<i<<endl;
	++i;
}

int main(void)
{
	/*A text;//存放在栈区；动态生存周期；自动回收内存；
	A & t=text;
	A * p= &text;
	(*p).c='a';
	p->c='a';
	A brr[3];
	brr[0].c='a';
	brr[1].i=10;//(brr+1)->i=10;以上都在栈区，创建后消失；
	A *p=new A;//p在栈区；这个指针变量指向堆区(new)
	p->c='a';
	delete p;//释放指向的那块内存，p本身没变；free(p),p=NULL;
	A * parr=new A[5];
	delete []parr;
	parr[1].c='a';
	parr[2].c='a';
	(parr+2)->c='a';*/
	A t2;//动态 执行才会创建 static A t2 后与天同齐；
	fun();fun();fun();fun();//0 1 2 3;
	cout <<sizeof(A)<<endl;//class与struct一样
	return 0;

}