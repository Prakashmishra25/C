#include<iostream>
using namespace std;
class Goods
{
public:
    typedef double Money;
    void SetPrice(Money value) {
        price = value;
    }
    Money GetPrice();
  

private:
    Money price;
};

Goods::Money  Goods::GetPrice(){

	return price;
}
//typeid(n1).name();
class A{
public:
	A(int p1,int p2){
		n1=p1;
		n2=p2;
	}//A(){}ϵͳĬ��д�ģ�
	int n1;
	int n2;



};








int main(void)
{
	/*Goods::Money a ;
	Goods d;
	d.GetPrice();
	Goods *p =&d;
	p->GetPrice();
	(*p).GetPrice();
	Goods & dd=d;
	dd.GetPrice();*/
	A text(100,200);
	//A t4=A()�޲�
	A t2=A(100,200);
	A *p =new A(100,200);
	cout <<text.n1<<endl;
	//malloc����ռ䴫���׵�ַ
	//A *p =new A//�����˶�����mallocֻ����ռ�
	return 0;
	

}