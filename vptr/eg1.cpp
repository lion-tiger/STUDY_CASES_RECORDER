#include <iostream>
using namespace std;

class Parent{
public:
    Parent(){}     //!!!! compile error
    void printP(){
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
    void printC(){
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
    cout<<"1.-------"<<endl;
    Parent p1;
    p1.printP();

    cout<<"2.-------"<<endl;
    Son s1;
    s1.printP();
    s1.printC();

    cout<<"3.-------"<<endl;
    Parent *p=NULL;
    p=&s1;
    p->printP();
    p1.printP();
    //p1.printC();
    cout<<"4.-------"<<endl;

    howtoPrint(&p1);
    howtoPrint(&s1);
    howtoPrint(p);


    cout<<"5.-------"<<endl;
    howtoPrint2(p1);
    howtoPrint2(s1);
    cout<<"6.-------"<<endl;
    Parent p3 = s1;
    return 6;
}
