#include<iostream>
#include<math.h>

using namespace std;

bool isPrim(int x)
{
	if(x<=3)
		return 0;

	for(int i=2;i<=sqrt(x);++i)
	{
		if(x%i==0)
			return 0;
	}

	return 1;
}

int main()
{
	for(int i=0;i<20;++i)
	{
		if(isPrim(i))
			cout<<i<<" ";
	}
	cout<<"\n";
	return 0;
}
