#include<iostream>
using namespace std;
template <typename T>
class MyVector
{
public:
	typedef T *iterator;
protected:
	iterator start;
	intertor finsh;
	intertor end_of_storage;
public:
	MyVector(unsigned int n=4)
	{
		start =new T[n];
		finsh=start;
		end_of_storage=start+n;
	}
	~MyVector()
	{
		delete []start;
		start=NULL;
		finsh=NULL;
		end_of_storage=NULL;

	}
	iterator begin()
	{
		return start;
	}
	iterator end()
	{
		return finsh;
	}
	unsigned int capacity()
	{

	}
	void push_back(const T&x)
	{
		if(finsh<end_of_storage)
		{
			*finsh++=x;

		}
		else
		{
			T *newM=new T[(end_of_storage-start)*2];
			for(i=0;i<end_of_storage-start;i++)
			{
				newM[i]=start[i];

			}
			delete[]start;
			statt=newM;
			finsh=newM+(finsh-start);
			end=newM+(end_of_storage-start)*2;
			start=newM;
			*finsh++=x;
			


		}
	}
	T pop_back()
	{
		return *--finsh;

	}
	bool erase(unsigned int pos)
	{
		if(pos<0||pos>=finsh-start)return false;
		for(T *t=start+pos;t<finsh-1;t++)
		{
			*t=*(t+1);

		}
		finsh--;

	}
	bool erase(unsigned int first,unsigned int last)
	{
		if()
			;
		if()
			;
		if()
			;
		int n=last-first+1;
		for(T *t=start +first;t<finsh-n;t++)
		{
			*t=*(t+n);

		}
		finsh-=n;

	}

}


int main(void)
{
	return 0;
}