#include <iostream>
#include <string>
using namespace std;

class MyNode {
public:
    MyNode(int num, MyNode * p):data(num),next(p){}
    int & getData(){return data;}
    MyNode * getNext(){return next;}
    void setData(int num){data = num;}
    void setNext(MyNode * p){next = p;}
private:
    int data;
    MyNode * next;
};

class MyList {
public:
    MyList(){head=NULL;  len=0;}
    MyList(const MyList & l){
        head = NULL; len = 0;
        for(MyNode*p = l.head; p; p=p->getNext())
            push(p->getData());
    }

    MyList & operator=(const MyList & l){
        clean();
        for(MyNode*p = l.head; p; p=p->getNext())
            push(p->getData());
        return *this;
    }

    ~MyList(){ clean(); }
    void clean(){
        while(head)
        {
            MyNode * p = head;
            head = head->getNext();
            delete p;
        }
        len = 0;
    }
    void push(int num){
        MyNode * newNode = new MyNode(num, NULL);
        if(head)         {
            MyNode * t = head;
            for(; t->getNext(); t=t->getNext());
            t->setNext(newNode);
        }
        else
            head = newNode;
        len++;
    }
    int & operator[](const unsigned int index) {
        if(index>=len) exit(1);
        MyNode * p = head;
        for(int i=0; i<index; i++)
            p = p->getNext();
        return p->getData();
    }

    MyNode * head;
    int len;
};

int main(void) {
    MyList l1;  
    l1.push(11); 
    l1.push(22); 
    l1.push(33); 
    MyList l2;  l2.push(100);
    l2 = l1;// l2.operator=(l1)
    cout << l1.len << endl;
    cout << l2.len << endl;

    return 0;
}