#include <iostream>
using namespace std;

class truck;
class car{
    int passenger;
    double speed;
public:
    void set_value()
    {
        cin>>passenger>>speed;
    }
    void compare(truck t);

};

class truck{
    int load;
    float speed;
public:
    void set_value()
    {
        cin>>load>>speed;
    }
    friend void car::compare(truck t);

};

void car::compare(truck t)
{
    if(speed>t.speed){
        cout<<"car is faster than truck"<<endl;
    }
    else{
        cout<<"truck is faster than car"<<endl;
    }
}

int main()
{
    car lamborgini;
    truck tata;
    lamborgini.set_value();
    tata.set_value();
    lamborgini.compare(tata);

    return 0;
}
