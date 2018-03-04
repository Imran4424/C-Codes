#include <iostream>
using namespace std;

class binar{
    int x,y;
public:
    void set_value()
    {
        cin>>x>>y;
    }
    void display()
    {
        cout<<x<<endl<<y<<endl;
    }
    binar operator +(binar petni)
    {
        binar daini;
        daini.x=x+petni.x;
        daini.y=y+petni.y;

        return daini;
    }
    binar operator -(binar petni)
    {
        binar daini;
        daini.x=x-petni.x;
        daini.y=y-petni.y;

        return daini;
    }
    binar operator *(binar petni)
    {
        binar daini;
        daini.x=x*petni.x;
        daini.y=y*petni.y;

        return daini;
    }
    binar operator /(binar petni)
    {
        binar daini;
        daini.x=x/petni.x;
        daini.y=y/petni.y;

        return daini;
    }
};

int main()
{
    binar pur,mali,sokhi;
    pur.set_value();
    mali.set_value();

    pur.display();
    mali.display();
    cout<<endl<<endl<<endl;

    sokhi=pur+mali;
    sokhi.display();

    sokhi=pur-mali;
    sokhi.display();

    sokhi=pur*mali;
    sokhi.display();

    sokhi=pur/mali;
    sokhi.display();

    return 0;
}
