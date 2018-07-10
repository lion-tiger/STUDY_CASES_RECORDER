#include <iostream>
using namespace std;

class A{
public:
    A(){cout<<"A()"<<endl;}
    A(int ccc){
       cout<<"A()"<<endl;
       this->a=ccc;
    }
    A(const A& a){cout<<"A(const A&)"<<endl;this->a=a.a;}
    ~A(){cout<<"~A()"<<endl;}
private:
    int a;
};

A x()
{
    A a;
    return a;
}

int main()
{
//    A b=x();
//    A a(1024);

//    A b=a;

    A c=A(512);
    A d=(A)444;
    return 2;
}
