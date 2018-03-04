#include <iostream>
using namespace std;

class unar{
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
    void operator -()
    {
        x--;
        y--;
    }
};


int main()
{
    unar link;
    link.set_value();
    link.display();
    -link;
    link.display();

    return 0;
}
