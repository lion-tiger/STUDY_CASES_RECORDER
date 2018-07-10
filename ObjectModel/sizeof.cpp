#include <iostream>
using namespace std;

struct A{
    int *i;
    char a;
};


class B{
    int *i;
    char a;
    virtual void run(){}
};

int main()
{
    cout<<"A"<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<"B"<<endl;
    cout<<sizeof(char *)<<endl;
    cout<<sizeof(int*)<<endl;
    cout<<sizeof(float*)<<endl;
    cout<<sizeof(double*)<<endl;
    cout<<"C"<<endl;
    cout<<sizeof(struct A)<<endl;
    cout<<sizeof(class B)<<endl;
}


