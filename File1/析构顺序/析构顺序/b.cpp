/*#include <iostream>
using namespace std;
class MyClass
{
public:
    MyClass(int a);
    ~MyClass();
    void setB(int b);
    void displayData() const;
    static void displaystaticData();
private:
    const int m_ia;
    int m_ib;
    static int s_ic;
};
MyClass::MyClass(int val)
    :m_ia(0),m_ib(val)//1.常成员m_ia需要在构造函数中写出初始化
{

}

MyClass::~MyClass()
{

}

void MyClass::setB(int b)

{
    m_ib = b;
}

void MyClass::displayData()const
{
    cout << "a = " << m_ia << endl;
    cout << "b = " << m_ib << endl;
}

 

void MyClass::displaystaticData()//2.静态成员函数类外定义要去掉static
{

    //cout << "a = " << m_ia << endl;//3.静态成员函数只能调用静态成员,m_ia属于常成员
    cout << "c = " << s_ic << endl;

}

int MyClass::s_ic;//4静态成员函数类外定义要去掉static
int main(void)

{

    //cout << MyClass::s_ic <<endl;//5.sic不能直接访问
    const MyClass obj1(10);
    //obj1.setB(9);//6.常对象只能访问常成员函数,setB(）为普通成员函数
    obj1.displayData();
    //obj1.displaystaticData();//7.常对象只能访问常成员函数,displaystaticData()为静态成员函数
    MyClass obj2(20);//,obj3;//8.没有默认构造函数无法这样初始化obj3
    obj2.setB(19);
    obj2.displayData();
    MyClass::displaystaticData();
    return 0;

}*/