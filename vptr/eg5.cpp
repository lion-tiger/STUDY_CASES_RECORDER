#include <iostream>
using namespace std;
class P{
public:
    virtual void fun(){
        cout<<"fun()"<<endl;
    }

    virtual void fun(int i,int j,int k,int r){
        cout<<"fun(int,int,int,int)"<<endl;
    }
};

class S:public P{
public:
    virtual void fun(int i,int j){
        cout<<"fun(int,int)"<<endl;
    }
};

int main()
{
    S s;
    s.fun();
}
