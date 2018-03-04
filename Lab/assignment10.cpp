#include <iostream>
using namespace std;

class mali{
    int length, width,height;
public:
    void set_value()
    {
        cin>>length>>width>>height;
    }
    int area()
    {
        return length*width*height;
    }
};

mali scan()
{
    mali anime;
    anime.set_value();

    return anime;
}
void print(mali tired)
{
    cout<<"Volume is : "<<tired.area()<<endl;
}

int main()
{
    mali ego;
    ego=scan();
    print(ego);
}
