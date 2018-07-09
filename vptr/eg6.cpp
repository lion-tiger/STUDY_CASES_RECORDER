#include <iostream>
using namespace std;
class P{
public:
    virtual void fun(){}
private:
    int a;
};


int main()
{
    cout<<sizeof(P)<<endl;
}
