#include <iostream>
using namespace std;

class rectangle{
private:
    int height;
    int width;
public:
    int area();
};

int rectangle::area()
{
    cin>>height;
    cin>>width;
    return height*width;
}

int main()
{
    rectangle Obj;
    cout<<"Area : "<<Obj.area()<<endl;
    return 0;
}
