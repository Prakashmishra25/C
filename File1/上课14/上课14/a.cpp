#include<iostream>
#include<cstdio>
using namespace std;
class A
{
public:A(){n=1;}
	   A(int t):n(t){}
	   int getN()const{return n;}
	   int getN()
	   {
		   printf("%p\n",this);
		   return n;//return this->n;


	   }
	   int n;
};


int main(void)
{
	//A brr[3];//�Ѿ���ʼ����ͨ�����캯��
	
	A brr[3]={A(1),A(2),A(3)};//A brr[3]={A(1),A(2)} 121
	//cout<<(brr+1)->n;
	//cout<<(*(brr+1)).n<<endl;
	cout<<brr[1].n;
	
	/*int arr[3]={1,2,3};
	cout<<*(arr+1)<<endl;
	cout<<1[arr]<<endl;
	cout<<*(1+arr)<<endl;*/






	/*A text;
	A *p=&text;
	cout<<text.n<<endl;
	cout<<p->n<<endl;
	cout<<(*p).n<<endl;
	cout<<p[0].n<<endl;
	cout<<(&text)->n<<endl;
	cout<<0[p].n<<endl;
	cout<<(&text)[0].n<<endl;*/








	A text;
	text.getN();//A::getN(&text)
	const A *  p=&text;
	p->getN();//����constȥ�����ܷ���
	//����Աֻ�ܷ��ʳ�������constҲ�����������ݣ�



	


	return 0;
}