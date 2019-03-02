#include<iostream>
#include<string>
using namespace std;
class MyString{
public:
	MyString(const char *const s){
		//1申请内存，2.拷贝 3保存地址
		ptr =new char[strlen(s)+1];
		
		strcpy(ptr,s);
		cout<<"我被创建了"<<endl;
		
	}
	void display(){
		cout<<ptr<<endl;


	}
	//void free(){
		//delete [] ptr;
	//}
	//析构函数

	~MyString(){
		delete [] ptr;
		cout<<"我被释放了"<<endl;


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