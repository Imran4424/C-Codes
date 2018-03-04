#include <iostream>
using namespace std;

int sum(int a,int b,int c=0)
{
	return a+b+c;
}

int main()
{
	int x,y;
	cin>>x>>y;

	cout<<endl<<sum(x,y)<<endl;

	return 0;
}
