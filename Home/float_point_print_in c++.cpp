#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int purcase,serial,product,i;
    float cost=0;
    cin>>purcase;

    for(i=1;i<=purcase;i++){
        cin>>serial>>product;

        if(serial==1001){
            cost += (product*1.5);
        }

        if(serial==1002){
            cost += (product*2.5);
        }
        if(serial==1003){
            cost += (product*3.5);
        }
        if(serial==1004){
            cost += (product*4.5);
        }
        if(serial==1005){
            cost += (product*5.5);
        }

    }
    std::cout << std::fixed;
    std::cout<<std::setprecision(2)<<cost;


    return 0;
}

