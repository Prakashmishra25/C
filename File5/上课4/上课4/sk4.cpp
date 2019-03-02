#include<iostream>
#include<string>
#include<stdlib.h>//调用malloc,malloc无法初始化memset(p,0,4)
using namespace std;
//1.在同一作用域
//函数名相同，形参列表不同
//返回值不做依据
//栈区 堆区 代码区 静态全区区 文字常量区













struct err
{
	string file;
	int line;
	string msg;
};


int main(void)
{
	int *p=(int *)malloc(sizeof(int)*3);
	p[0]=10;//*(p+0)
	p[1]=20;//*(p+1)
	2[p]=30;//*(2+p)

	int *q= new int(100);
	cout <<*q<<endl;
	delete q;
	int *p= new int[3];
	p[0]=10;
	p[1]=20;
	p[2]=30;
	delete []p;//表示释放数组内存；
	try
	{
		cout<<"企图"<<endl;
		throw(110);
		cout<<"抢银行"<<endl;

	}
	catch(int e)
	{
		if(e==110)
			cout<<"迅速出警，制止行凶"<<endl;
		elsw if(e==120)
			cout<<""<<endl;
	}
	catch(...)
	{
		cout<<""<<endl;






























		try{

			ree e;
			e.file=_FILE_;
			e.line=_LINE_;
			e.msg="这段代码太帅了，无法运行";
			throw(e);
		}
		catch(err e)
		{

		}



















	int a=10,c=20;
	int & b = a;
	int *p=&b;
	//b=c;不可以，专一
	cout<<sizeof(a)<<endl;//4
	cout<<sizeof(b)<<endl;//4
	b=20;//把a修改为20；



	return 0;

}