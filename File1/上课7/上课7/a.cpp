#include<iostream>
using namespace std;

/*class point {
public:
	int x;
	int y;
};//Ĭ��˽�У�
class rect{
public:
	void setpoint(int x1,int x2,int y1,int y2);//��Ա����˵����//��Ϊ���ڶ���Ĭ��Ϊ����������inline �����滻����ʹ���������exe�ļ��ࡣ�ڴ���ʱ��ļƽϣ���
	void printArea();

private:
	point p1;
	point p2;


};




void rect::setpoint(int x1,int x2,int y1,int y2)
{
	p1.x=x1; p1.y=y1;
	p2.x=x2; p2.y=y2;//public;




}//���ⶨ�壻
void rect::printArea(){
	int w=p2.x-p1.x;
	if(w<0){
		w*=-1;
	}
	int h=p1.y-p2.y;
	if(h<0)h*=-1;
	cout<<"���Ϊ"<<w*h<<endl;
}

int main(void)
{
	point p1;
	//p1.x=10;//Ĭ������´���
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
		cout<<"���"<<endl;

	}//�ڴ��������溯����

};
A text;//ȫ�ֱ�����text���Լ����ڴ棬��main����ִ��֮ǰ����return֮���ͷţ���̬�������ڣ��ھ�̬ȫ������
void fun(){
	static int i=0;//��������֮ǰ�ʹ��ڣ����� ���ڣ������е�����������
	cout <<i<<endl;
	++i;
}

int main(void)
{
	/*A text;//�����ջ������̬�������ڣ��Զ������ڴ棻
	A & t=text;
	A * p= &text;
	(*p).c='a';
	p->c='a';
	A brr[3];
	brr[0].c='a';
	brr[1].i=10;//(brr+1)->i=10;���϶���ջ������������ʧ��
	A *p=new A;//p��ջ�������ָ�����ָ�����(new)
	p->c='a';
	delete p;//�ͷ�ָ����ǿ��ڴ棬p����û�䣻free(p),p=NULL;
	A * parr=new A[5];
	delete []parr;
	parr[1].c='a';
	parr[2].c='a';
	(parr+2)->c='a';*/
	A t2;//��̬ ִ�вŻᴴ�� static A t2 ������ͬ�룻
	fun();fun();fun();fun();//0 1 2 3;
	cout <<sizeof(A)<<endl;//class��structһ��
	return 0;

}