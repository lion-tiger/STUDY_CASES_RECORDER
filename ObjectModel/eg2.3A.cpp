

#include <iostream>
using namespace std;


class A{
public:
    A(){cout<<"A default constructor"<<endl;}
    A(const A& a){cout<<"A copy constructor"<<endl;}
    ~A(){cout<<"~A()"<<endl;}
};


A foo(){
    A a;
    return a;
}

int main()
{
    
    A b=foo();

    A c=b;

    cout<<"B------"<<endl;
    A a0;
    A a1(a0);
    A a2=a0;
    A a3=A(a0);
}
