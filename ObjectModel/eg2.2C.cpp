#include <iostream>
using namespace std;


class ZooAnimal{
public:
    ZooAnimal();
    virtual ~ZooAnimal();

    virtual void animate();
    virtual void draw();
privalte:
};

class Bear:public ZooAnimal{
public:
    Bear();
    void animate();
    void draw();
    virtual void dance();

};


Bear yoqi;
Bear winnie = yoqi;

ZooAnimal franny = yoqi;

//----------------------------

class Raccoon : public virtual ZooAnimal{
public:
    Racoon();
    Racoon(int val);
private:
};


class RedPanda : public Raccoon{
public:
    RedPanda();
    RedPanda(int val);
private:

}
