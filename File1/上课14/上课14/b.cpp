#include<iostream>
#include<cstdio>
using namespace std;
class A
{
public:A(){n=1;}
	   A *fun(){return this;}
	   A(int t):n(t){}
	   int getN(){return n;};
	   static int getcount(){return count;}
private:

	   
	 
	   int n;
	   static int count;
};
int A::count;//����


int main(void)
{
	A text;
	text.getN();//A::getN(&text)
	text.getcount();//��̬��Ա����û��thisָ�� A::getcount()���ܷ���n;
	A::getcount();

	return 0;
}