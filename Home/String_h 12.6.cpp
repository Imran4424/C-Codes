#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[15],s2[15];
    int c;

    cin.getline(s1,15);
    cin.getline(s2,15);
    c=strcasecmp(s1,s2);
    cout<<c<<endl;

    return 0;
}
