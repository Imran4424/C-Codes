#include <iostream>
using namespace std;

class passobj{
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

void func(passobj A)
{
    A.set_value();
    cout<<"Volume is : "<<A.volume()<<endl;
}

int main()
{
    passobj obj;
    func(obj);

    return 0;
}
