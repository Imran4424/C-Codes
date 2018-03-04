#include <iostream>
using namespace std;

class sum{
    int a,b;
public:
    void set_value()
    {
        cin>>a>>b;
    }
    int add();
    sum()
    {
        cout<<"Constructor is calling here..."<<endl;
    }
    ~sum()
    {
        cout<<"Destructor is calling here..."<<endl;
    }
};

int sum::add()
{
    return a+b;
}

int main()
{
    sum mali,pur,link,nayeem,harry;

    mali.set_value();
    pur.set_value();
    link.set_value();
    nayeem.set_value();
    harry.set_value();

    cout<<endl<<mali.add()<<endl<<pur.add()<<endl<<link.add()<<endl<<nayeem.add()<<endl<<harry.add()<<endl;

    return 0;
}
