#include <iostream>
using namespace std;
class Screen{
public:
    typedef std::string::size_type index;
    char get() const {return contents[cursor];}
    char get(index ht,index wd)const;

    Screen& move(index r,index c);
    Screen& set(char);
    Screen& set(index,index,char);
    Screen& display(ostream &os)
    {
        cout<<"non const "<<endl;
        do_display(os);
        return *this;
    }
    const Screen& display(ostream &os) const
    {
        cout<<"const "<<endl;
        do_display(os);
        return *this;
    }
private:
    string contents;
    index cursor;
    index height,width;

    void do_display(ostream &os) const
    {
        os<<contents;
    }
};
char Screen::get(index ht,index wd) const
{
    return contents[ht*width + wd];
}

Screen& Screen::move(index r,index c)
{
    cursor = r*width+c;
    return *this;
}
Screen& Screen::set(char ch)
{
    contents[cursor]=ch;
    return *this;
}
Screen& Screen::set(index a,index b,char c)
{
    move(a,b);
    set(c);
    return *this;
}

int main(){
//    Screen myscreen(4,1);
//    const Screen constScreen(4,1);
//    myscreen.get();
//    myscreen.get(0,0);
    Screen myScreen;
    myScreen.move(4,1);
//    myScreen.set(4,2,"#");
    myScreen.display(cout);
   
    const Screen b(5,2);
    b.display(cout);
}
