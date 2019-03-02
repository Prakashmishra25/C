#include<iostream>
using namespace std;
class A
{

public:
    A();
    ~A();

};
A::A()
{
    cout << "A" << "    ";
}

A::~A()
{
    cout << "-A" << "   ";
}
class B

{

public:

    B();

    ~B();

    A a1;

    A *pa;

};

B::B()

{

    cout << "B" << "    ";  A a2[2];

}

B::~B()

{

    cout << "-B" << "   ";

}

class C

{

public:

    C();

    ~C();

    B b1;

    B *pb;

    A a1;

};

C::C()

{

    cout << "C" << "    ";

}

C::~C()

{

    cout << "-C" << "   ";

}


int main(void)

{

    C *pc = new C;

    cout << endl;

    C c1;

    cout << endl;

    delete pc;

    cout << endl;

    return 0;

}