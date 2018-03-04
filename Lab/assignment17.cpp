#include <iostream>
using namespace std;

class 	overloading{
	int i,j;
	public:
		overloading(int a,int b)
		{
			i=a;
			j=b;
		}
		overloading()
		{
			cout<<"constructor is calling here..."<<endl;
		}
		int sum()
		{
			return i+j;
		}
		~overloading()
		{
			cout<<"Destructor is calling here...."<<endl;
		}
};

int main()
{
	int x,y;
	cin>>x>>y;
	overloading obj(x,y);
	cout<<" Sum is : "<<obj.sum()<<endl;

	return 0;
}
