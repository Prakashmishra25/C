#include<iostream>
using namespace std;
#include<string>
class A{

public: int n1;
		void display1(){cout<<n3<<endl;}
private:int n2;

protected: int n3;//���ɼ̳�



}
class B : public A
{
public:
	void display2(){display1();}//����
}
/*class person
{
public:
	person(string pname,int page,int psex):name(pname),age(page),sex(psex){cout<<"person"<<endl;}
	~person(){cout<<"~person"<<endl;}
	string name;
	int age;
	int sex;


};
class student : public person
{
public:
	student(string tname,int tage,int tsex,int tid)
		:person(tname,tage,tsex),id(tid)
	{
		cout<<"student "<<endl;
	}
	~student(){cout<<"~student "<<endl;}
	void display()
	{
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<sex<<endl;
		cout<<id<<endl;
	}
	int id;
	double age;//���ȼ�

};*/



int main(void)
{
	student A("zs",20,1,101);//�Ȼ�����Լ�
	A.display();

	return 0;
}