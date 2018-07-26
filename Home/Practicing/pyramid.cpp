#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cin>>n;

	cout<<endl;

	for (int i = 1; i <= n; i++)
	{
		for(int j = i+1; j <= 2*i; j++)
		{
			cout<<j;
		}

		cout<<endl;
	}


	return 0;
}