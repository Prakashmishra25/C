#include<iostream>
#include<string>
using namespace std;
class Logger
{
private:
	class temp{
	public:
		~temp(){
			if(p!=NULL)delete p;
		}
	};
	Logger(){}
	Logger(const Logger & t){}
	~Logger(){}
	static Logger *p;
public:
	static Logger *getInstance(){
		if(p==NULL)
		{
			p=new Logger;
		}
		return p;
	}
	void display(){cout<<"hello"<<endl;}
	static temp t;//����������ͷ�,�������ͷ�p;

};
Logger::temp Logger::t;
Logger * Logger::p=NULL;
int main(void)
{
	Logger *p=Logger::getInstance();
	p->display();
	return 0;
}

















/*����ģʽ*/
/*class Logger
{
private:

	Logger(){}
	Logger(const Logger & t){}
	~Logger(){}
	static Logger l;
	

public:
	static Logger *getInstance(){return l;}
	void display(){cout<<"hello"<<endl;}
	
};
Logger Logger::l;//������������ڴ���.*/



