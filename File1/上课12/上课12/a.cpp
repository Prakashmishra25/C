#include<iostream>
using namespace std;



class Student{;
public:
	Student(string s="",int a=10)
		:name(s),age(a)
	{
		count++;

	}
	~Student(){
		count--;
	}
	//ֻ�ܷ��ʾ�̬���Գ�Ա�;�̬��Ա����
	//���ܷ��ʷǾ�̬���Գ�Ա�ͺ���
	static int getcount(){
		return count;
	}
//private:
	string name;
	int age;
	//��̬���Գ�Ա����
	static int count;//��̬���Գ�Ա


};
//���壬����Ҫstatic
int Student ::count =10;//ֻ����̬��
int student ::getcount(){
	return count;
}//Ҳ����static,�����࣬�����Ƕ���,�ڴ浥������



/*int num;//int num=0;
void fun()
	//int num2=0;
	static int num;//��̬�ֲ���������ջ�����ھ�̬ȫ����
	num++;
	cout<<::num<<endl;
}*/
int main(void)
{
	/*int *p=new int;//p�Ƕ�̬����;
	cout<<num<<endl;
	fun();
	fun();
	fun();*/
	Student s1,s2;//ջ��
	cout <<s1.count<<endl;
	s1.count++;
	{
		Student s3;
	}
	cout <<s2.count<<endl;
	cout<<Student::count<<endl;//��װ

	return 0;
}