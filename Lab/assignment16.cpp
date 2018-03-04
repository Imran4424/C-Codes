#include <iostream>
using namespace std;

class project{
    int height,width,length;
public:
    void set_value()
    {
        cin>>height>>width>>length;
    }
    int volume()
    {
        return height*width*length;
    }
};

project func(project &obj)
{
    obj.set_value();
    return obj;
}

int main()
{
    project send,pot;
    pot=func(send);
    cout<<"Volume is : "<<pot.volume()<<endl;

    return 0;
}
