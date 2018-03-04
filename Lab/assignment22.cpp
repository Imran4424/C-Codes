#include <iostream>
using namespace std;

float sum(int a,int b,int c)
{
    return (float)(a+b)/c;
}

int sum(int a,int b)
{
    return a+b;
}

float sum(int a,float x)
{
    return a+x;
}

int main()
{
    int a,b,c;
    float x;
    cout<<"input integer numbers"<<endl;
    cin>>a>>b>>c;

    cout<<"input float number"<<endl;
    cin>>x;

    cout<<"Sum is : "<<sum(a,b)<<endl;
    cout<<"Sum is : "<<sum(a,b,c)<<endl;
    cout<<"Sum is : "<<sum(a,x)<<endl;

    return 0;
}
