#include <iostream>
#include <stdlib.h>
using namespace std;

class absvalue{
    int num;
public:
    void setnum(int x);
    int abvalue()
    {
        num=abs(num);
        return num;
    }
    void print();
};

void absvalue::setnum(int x)
{
    num=x;
}

inline void absvalue::print()
{
    cout<<"Absolute value : "<<num<<endl;
}

int main()
{
    absvalue obj;
    int i;
    cin>>i;
    obj.setnum(i);
    obj.abvalue();
    obj.print();

    return 0;
}
