/*#include<iostream>
using namespace std;

class A{public: int n;};
class B: public A{public: int n;};
class C: public B{public: int n;};



int main(void)
{
	//B b; b.n=10;
	//b.A;;n=20;
	C c;
	c.B::n=20;
	c.B::A::n=30;
	return 0;
}*/