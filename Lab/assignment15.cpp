#include <iostream>
using namespace std;

class dynamic{
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

int main()
{
    dynamic *ptr;
    int n,i;
    cout<<"how many objects"<<endl;
    cin>>n;
    ptr=new dynamic[n];
    for(i=0;i<n;i++){
        ptr[i].set_value();
    }
    for(i=0;i<n;i++){
        cout<<endl<<ptr[i].volume()<<endl;
    }
    delete [] ptr;

    return 0;
}
