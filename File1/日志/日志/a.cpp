#include<iostream>
#include<string>
using namespace std;
class Logger
{
private:
	string log;
	Logger(string a="2017-12-1,today is shit"):log(a){}; 
public:
	static Logger A;
	void print()
	{
		cout<<"log:"<<log<<endl;
	}
	static Logger* getInstance()
	{
		return &A;
	}

};
Logger Logger::A("2017-12-01,today is sunday");

int main(void)
{
	
	Logger * P=Logger::getInstance();
	P->print();
	return 0;
}