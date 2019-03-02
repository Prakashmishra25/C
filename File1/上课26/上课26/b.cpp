#include<iostream>
#include<string>
using namespace std;
template<typename Type,int Len>
class MyStack
{
public:
	MyStack();
	void push(Type d);
	Type pop();
	int length();
private:
	int top;
	Type arr[Len];
};
template<typename Type,int Len>
MyStack<Type,Len>::MyStack()
{
	top=0;

}
template<typename Type,int Len>
void MyStack<Type,Len>::push(Type d)
{
	if(top==Len)
	{
		exit(1);
	}
	arr[top++]=d;

}
template<typename Type,int Len>
Type MyStack<Type,Len>::pop()
{
	if(!top)
		exit(0);
	return arr[--top];
}
int main(void)
{
	MyStack<int,20> s1;
	s1.push(10);
	cout<<s1.pop()<<endl;
}