#include <iostream>
using namespace std;

class pur{

	public:
		int sum(int x,int y,int z=0)
		{
            return x+y-z;
		}
};



int main()
{
	int a,b,c;
	cin>>a>>b;
	pur techartist;

	cout<<"result is: "<<techartist.sum(a,b)<<endl;
	return 0;
}
