#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char str[15];

    cin.getline(str,15);

    cout<<toupper(str,15)<<endl;

    return 0;
}
