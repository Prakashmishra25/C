#include<iostream>
#include<string>
using namespace std;
classPerson{

public:
	Person()
		:id("0001")
	{}
	void display()const{cout<<id<<endl;};//const��ʾ��ײ���д�����
	void setname(string s){
		name=s;
	}
	string getid(){return id;}
	string name;
	int age;
private:
	const string id;//�����Գ�Ա
};




int main(void)
{
	Person p1;
	const Person p2;//p2ֻ�ܶ�ȡ����д��p2.setname("list")�Ƿ�д��p2.display()�ᱻ��Ϊ�Ƿ�д��
	//������ֻ�ܷ��ʳ�����


}