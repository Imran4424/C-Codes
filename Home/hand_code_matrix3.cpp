#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;

    while(n!=0){
        for(i=1;i<=(1*pow(2,n-1));i=i*2){
            for(j=i;j<=(i*pow(2,n-1));j=j*2){
                cout<<setw(9)<<j<<" ";
            }
            cout<<endl<<endl;
        }
        cin>>n;
    }

    return 0;
}
