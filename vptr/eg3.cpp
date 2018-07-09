#include <iostream>
using namespace std;

class Parent{
public:
    Parent(int a){this->a = a;}     //!!!! compile error
    virtual void printP(){
        cout<<"Parent"<<endl;
    }

    Parent(const Parent& obj){
        cout<<"Copy Constructor"<<endl;
    }
private:
    int a;
};

class Son:public Parent{
public:
    Son(int b):Parent(10){this->b =b;}
    void printP(){
        cout<<"Son"<<endl;
    }
private:
    int b;
};

void howtoPrint(Parent *base)
{
    base->printP();
}
void howtoPrint2(Parent &base)
{
    base.printP();
}

int main(int argc,char const*argv[])
{
    Parent *p=NULL;
    Parent p1(20);
    Son s1(30);

    cout<<"A:"<<endl;
    p=&p1;
    p->printP();
    p=&s1;
    p->printP();
 
    cout<<"B:"<<endl;
    Parent &b2=p1;
    b2.printP();
    Parent &b3=s1;
    b3.printP();

    cout<<"C"<<endl;
    Parent *pbase;
    pbase=&p1;
    howtoPrint(pbase);
    pbase=&s1;
    howtoPrint(pbase);

    cout<<"D"<<endl;
    howtoPrint2(p1);
    howtoPrint2(s1);

    return 3;
}
