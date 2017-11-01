#include <iostream>
using namespace std;

class Shape{
protected:
    int width,height;
public:
    Shape(int a=0,int b=0)
    {
        cout<<"Shape constructor"<<endl;
        width = a;
        height = b;
    }
    virtual int area()
    {
        cout<<"Parent class area:"<<endl;
        return 0;
    }
};
class Rectangle:public Shape{
public:
    Rectangle(int a=0,int b =0):Shape(a,b){cout<<"Rectangle constructor!"<<endl;}
    int area(){
        cout<<"Rectangle area()"<<endl;
        return width*height;
    }
};

class Triangle:public Shape{
public:
    Triangle(int a=0,int b=0):Shape(a,b){cout<<"Triangle constructor!"<<endl;}
    int area(){
        cout<<"Triangle area()!"<<endl;
        return width*height/2;
    }
};

int main()
{
    Shape *shape;
    Rectangle rec(10,7);
    Triangle tri(10,5);

    shape = &rec;
    cout<<shape->area()<<endl;
    shape = &tri;
    cout<<shape->area()<<endl;
}
