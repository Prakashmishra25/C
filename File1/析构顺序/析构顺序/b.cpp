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
    :m_ia(0),m_ib(val)//1.����Աm_ia��Ҫ�ڹ��캯����д����ʼ��
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

 

void MyClass::displaystaticData()//2.��̬��Ա�������ⶨ��Ҫȥ��static
{

    //cout << "a = " << m_ia << endl;//3.��̬��Ա����ֻ�ܵ��þ�̬��Ա,m_ia���ڳ���Ա
    cout << "c = " << s_ic << endl;

}

int MyClass::s_ic;//4��̬��Ա�������ⶨ��Ҫȥ��static
int main(void)

{

    //cout << MyClass::s_ic <<endl;//5.sic����ֱ�ӷ���
    const MyClass obj1(10);
    //obj1.setB(9);//6.������ֻ�ܷ��ʳ���Ա����,setB(��Ϊ��ͨ��Ա����
    obj1.displayData();
    //obj1.displaystaticData();//7.������ֻ�ܷ��ʳ���Ա����,displaystaticData()Ϊ��̬��Ա����
    MyClass obj2(20);//,obj3;//8.û��Ĭ�Ϲ��캯���޷�������ʼ��obj3
    obj2.setB(19);
    obj2.displayData();
    MyClass::displaystaticData();
    return 0;

}*/