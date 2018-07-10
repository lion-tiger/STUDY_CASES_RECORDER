

#include <iostream>
using namespace std;


class A{
public:
    A(){cout<<"A default constructor"<<endl;}
    A(const A& a){cout<<"A copy constructor"<<endl;}
    ~A(){cout<<"~A()"<<endl;}
};

void foo(A a)
{
    return;
}

void bar(A& a)
{
    return;
}
int main()
{
    A a;
//    foo(a);
    bar(a);
    
}
