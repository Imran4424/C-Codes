#include <iostream>
using namespace std;

class square{
    int side;
public:
    void input()
    {
        cin>>side;
    }
    int area()
    {
        return (side*side);
    }
};

int main()
{
    int n,i;
    cin>>n;
    square obj[n];

    for(i=0;i<n;i++){
        obj[i].input();
    }
    for(i=0;i<n;i++){
        cout<<"Area of obj "<<i+1<<" : "<<obj[i].area()<<endl;
    }

    return 0;
}
