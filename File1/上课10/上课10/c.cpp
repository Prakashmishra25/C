#include<iostream>
#include<string>
using namespace std;
class MyString{
public:
	MyString(const char *const s){
		//1�����ڴ棬2.���� 3�����ַ
		ptr =new char[strlen(s)+1];
		
		strcpy(ptr,s);
		cout<<"�ұ�������"<<endl;
		
	}
	void display(){
		cout<<ptr<<endl;


	}
	//void free(){
		//delete [] ptr;
	//}
	//��������

	~MyString(){
		delete [] ptr;
		cout<<"�ұ��ͷ���"<<endl;


	}
private:
	char *ptr;


};
int main(void)
{
	char b[]="abcd";
	MyString s1("hello");
	string a="affuivygi";
	cout<<strlen(b)<<endl;
	cout<<sizeof(b)<<endl;
	return 0;
}