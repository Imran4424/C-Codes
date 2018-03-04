#include <iostream>
using namespace std;

class mix{
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
    friend mix operator + (mix i);
    friend mix operator + (mix i,mix j);
};

mix operator + (mix i)
{
    i.x=-i.x;
    i.y=-i.y;
    return i;
}

mix operator + (mix i,mix j)
{
    mix temp;
    temp.x=i.x+j.x;
    temp.y=i.y+j.y;

    return temp;
}

int main()
{
    mix a,b,c;
    a.set_value();
    b.set_value();

    a.display();
    b.display();
    cout<<endl<<endl<<endl;
    c=a+b;
    c.display();
    cout<<endl<<endl<<endl;

    +(a);
    a.display();

    return 0;
}
