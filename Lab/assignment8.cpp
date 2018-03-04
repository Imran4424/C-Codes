#include <iostream>
using namespace std;

class assobj{
    int a,b;
public:
    void set_value()
    {
        cin>>a>>b;
    }
    int sum()
    {
        return a+b;
    }
    int substract();
    int imply();
    int division();
};

int assobj::substract()
{
    return a-b;
}

int assobj::imply()
{
    return a*b;
}

int assobj::division()
{
    return a/b;
}

int main()
{
    assobj a,b,c,d;
    a.set_value();
    b.set_value();
    c.set_value();
    d.set_value();

    cout<<endl<<a.sum()<<endl<<b.substract()<<endl<<c.imply()<<endl<<d.division()<<endl;

    return 0;
}
