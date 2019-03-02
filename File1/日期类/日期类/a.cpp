#include<iostream>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(){
		year=2000;
		month=1;
		day=1;
	}
	Date(int a,int b,int c){
		year=a;
		month=b;
		day=c;

	}
	void setDate(int m,int n,int p)
	{
		year=m;
		month=n;
		day=p;
		

	}
	void dispaly(){
		cout<<year<<"."<<month<<"."<<day<<endl;
	}


};

