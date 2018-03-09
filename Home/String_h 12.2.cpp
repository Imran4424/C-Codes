#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char line[15];

    cin.getline(line,15);
    cout<<strrev(line)<<endl;

    return 0;
}

