/* Don't worry, if you get error because it is an ambiguous function. so that this will always produce error */


#include <iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}

int sum(int x,int y,int z=0)
{
    return x+y+z;
}

int main()
{
    int i,j,a,b,c;
    cout<<"input two integer number"<<endl;
    cin>>i>>j;
    cout<<"sum is : "<<sum(i,j)<<endl;

    cout<<"input three integer number"<<endl;
    cin>>a>>b>>c;
    cout<<"sum is : "<<sum(a,b,c)<<endl;

    return 0;
}
