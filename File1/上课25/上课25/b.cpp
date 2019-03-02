/*#include<iostream>
#include<string>
using namespace std;
//飞行类,由于无法实例化对象，纯虚;
class person
{
public:
	string name;
	int age;
};
class IFly
{
public:
	virtual void fly()=0;
};//只含有纯虚函数的类，借口类;抽象类包含接口类;interface;
class superman :public person, public IFly
{
public: virtual void fly(){cout<<"飞"<<endl;}
};



int main(void)
{

	return 0;
}*/