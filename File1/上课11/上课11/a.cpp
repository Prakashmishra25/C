#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class MyString{
public:
	MyString(const char *const p)
	{
		ptr=new char[strlen(p)+1];
		strcpy(ptr,p);
	}
	~MyString(){
		delete []ptr;
	}
	//�������캯��
	MyString(const MyString & t)//����ʡ�ڴ棬����Ч�ʸ�
	{
		//ptr=t.ptr;ǳ����
		//
		ptr=new char[strlen(t.ptr)+1];
		strcpy(ptr,t.ptr);

	}
	void display(){
		cout<<ptr<<endl;
	}
private:
	char*ptr;



};
int main(void)
{
	char a[]="abcd";
	
	
	MyString s1("abcd");
	//cout<<s1.ptr<<endl;//�������ַ����ӡ��Ӧ�ڴ�����ַ���ȡ��/0
	//MyString s2("1234");
	MyString s2(s1);
	MyString s3=s1;//Ҳ�ǿ������캯��

	//s2=s1;
	//MyString s2(s1);��������//ϵͳ͵͵�ṩ����1���캯��

}