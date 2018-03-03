#include <iostream>
#include <math.h>
using namespace std;

class sqare_root{
    int num;
public:
    void set_value()
    {
        cin>>num;
    }
    float root()
    {
        float result;

        result= sqrt(num);

        return result;
    }

};

int main()
{
    sqare_root linkon;
    linkon.set_value();
    cout<<"Root is : "<<linkon.root()<<endl;

    return 0;
}
