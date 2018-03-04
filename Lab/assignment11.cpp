#include <iostream>
using namespace std;

class copy_cons{
    int *ptr;
public:
    copy_cons()
    {
        ptr=new int(0);
        cout<<"Constructor..."<<*ptr<<endl;
    }
    ~copy_cons()
    {
        cout<<"destructor..."<<*ptr<<endl;
        delete ptr;
    }
    void set_value(int a)
    {
        *ptr=a;
    }
    void get()
    {
        cout<<*ptr<<endl;
    }
    copy_cons(copy_cons &obj)
    {
        ptr= new int(1);
        cout<<"Constructor..."<<*ptr<<endl;
    }
};

int main()
{
    int i;

    copy_cons pur;
    pur.get();
    copy_cons mali = pur;
    pur.get();
    mali.get();

    cout<<"input an integer"<<endl;
    cin>>i;

    mali.set_value(i);

    pur.get();
    mali.get();

    return 0;
}
