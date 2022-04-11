#include <iostream>

using namespace std;

int funk (int n)
{
	if (n%2==0) return 0;
	else return 1;
}

int main()
{
	int k;
	cin>>k;
	cout<<funk(k);
}
