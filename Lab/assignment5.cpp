#include <iostream>
using namespace std;

class parameter{
    int a,b,c;
public:
    int sum();
    parameter(int i,int j,int k)
    {
        a=i;
        b=j;
        c=k;
        cout<<"Constructor is calling here..."<<endl;
    }
    ~parameter()
    {
        cout<<"Destructor is calling here..."<<endl;
    }
};

int parameter::sum()
{
    return a+b+c;
}

int main()
{
    int i,j,k;
    cin>>i>>j>>k;

    parameter obj(i,j,k);
    cout<<"Sum is : "<<obj.sum()<<endl;
    return 0;
}
