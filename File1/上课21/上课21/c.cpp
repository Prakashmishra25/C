#include<iostream>
#include<string>
using namespace std;
class Complex
{
public:
	const Complex operator+(const Complex &r)const//Լ��������*this//��������������� ��ǰ���� *this//�Ҳ�����r
	{
		Complex rtn;
		rtn.m_iReal=m_iReal+r.m_iReal;
		rtn.m_iImag=m_iImag+r.m_iImag;
		return rtn;

	}
	//ǰ++
	Complex & operator++(){
		m_iReal+=1;
		m_iImag+=1;
		return *this;

	}
	//��++
	const Complex operator++(int)
	{
		Complex rtn;
		rtn.m_iImag=m_iImag;
		rtn.m_iReal=m_iReal;
		m_iReal+=1;
		m_iImag+=1;
		return rtn;

	}



private:
	int m_iReal;
	int m_iImag ;
};

int main(void)
{
	//c3=c1.operator+(c2)
	//c1+c2;
	return 0;
}