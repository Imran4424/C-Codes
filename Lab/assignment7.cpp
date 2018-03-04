#include <iostream>
using namespace std;

class daini{
    int i,j,k,l;
public:
    void set_value()
    {
        cin>>i>>j>>k>>l;
    }
    double sum()
    {
        return ((k/l)*j)+i;
    }
};

int main()
{
    daini mali;
    mali.set_value();
    cout<<"Result is : "<<mali.sum()<<endl;
    return 0;
}
