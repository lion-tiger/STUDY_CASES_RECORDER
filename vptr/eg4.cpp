#include <iostream>
using namespace std;

class HeroFighter{
public:
    virtual int power(){return 10;}
};

class AdvHeroFighter: public HeroFighter{
public:
    int power(){return 20;}
};

class EnemyFighter{
public:
    int attack(){return 15;}
};



void play(HeroFighter *hf, EnemyFighter *ef)
{
    if(hf->power() > ef->attack())
        cout<<"Hero Win"<<endl;
    else
        cout<<"Enemy Win"<<endl;
}



int main(int argc,char const *argv[])
{
    HeroFighter hf;
    AdvHeroFighter ahf;
    EnemyFighter ef;

    play(&hf,&ef);
    play(&ahf,&ef);


}
